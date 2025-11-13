// 函数: sub_1419e3480
// 地址: 0x1419e3480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int128_t zmm6
int128_t var_28 = zmm6
int64_t* rbx = arg1

while (true)
    int64_t* var_58
    int32_t rax_2 = sub_1419e2ca0(rbx, arg3, &var_58)
    
    if (rax_2 != 0)
        if (rax_2 != 1)
            break
        
        rbx = var_58
    else
        float zmm2 = *(rbx + 0x3c) f- *(rbx + 0x34)
        float zmm1_1 = rbx[7].d f- rbx[6].d
        int128_t zmm0_1 = *(rbx + 0x4c)
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        
        if (zmm2 * zmm2 + zmm1_1 * zmm1_1 f<= zmm0_1.d)
            break
        
        if (rbx[1].d s< 4)
            break
        
        sub_1419e6370(rbx)

int32_t rax_3 = arg3[1].d
zmm6 = *arg3
int64_t rdi_1 = sx.q(rbx[1].d)
int64_t var_40 = *arg2
int32_t rax_5 = (rdi_1 + 1).d
rbx[1].d = rax_5

if (rax_5 s> *(rbx + 0xc))
    sub_1405c4e40(rbx)

int64_t result = *rbx
int64_t rcx_4 = rdi_1 << 5
*(rcx_4 + result) = zmm6
*(rcx_4 + result + 0x10) = rax_3.o
__security_check_cookie(rax_1 ^ &var_78)
return result
