// 函数: sub_1429c3960
// 地址: 0x1429c3960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t (* arg_10)(int64_t* arg1) = sub_140a20410
struct _Thrd_t var_18
struct _Thrd_t* result = sub_1429c3510(&var_18, &arg_10, &arg_8)

if (*(arg1 + 0x10) == 0)
    int128_t zmm0
    zmm0.q = result->_Hnd
    zmm0:8.d = result->_Id
    *(arg1 + 8) = zmm0
    result->_Hnd = 0
    result->_Id = 0
    
    if (var_18._Id == 0)
        return result

terminate()
noreturn
