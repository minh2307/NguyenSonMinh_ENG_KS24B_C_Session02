#include <stdio.h>

int main(){
	int chieu_dai,chieu_rong;
	    printf("chieu dai hinh chu nhat la(dai > rong):");
	    scanf("%d",&chieu_dai);
	    printf("chieu rong hinh chu nhat la:");
	    scanf("%d",&chieu_rong);
	int chu_vi = 2 * (chieu_dai + chieu_rong);
	    printf("chu vi cua hinh chu nhat la:%d\n",chu_vi);
	int dien_tich = chieu_dai * chieu_rong;
	    printf("dien tich cua hinh chu nhat la:%d\n",dien_tich);

return 0;
}
