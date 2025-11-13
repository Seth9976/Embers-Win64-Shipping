// 函数: sub_1426018f0
// 地址: 0x1426018f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x74) & 0xef
*(arg1 + 0x74) = rax

if (arg1[2] != 0)
    *(arg1 + 0x74) = rax & 0xf7
    arg1[0xe].d
    arg1[0xe].d = 0
    sub_1425fe930(arg1)

void*** rax_2
int32_t zmm0
rax_2, zmm0 = sub_141f88540()
int64_t* rax_3 = sub_1405f7040(rax_2)
int64_t r8 = *rax_3
char rdx_1 = (*(r8 + 0xd8))(rax_3, arg1, r8)

if (arg1[2] != 0)
    if ((*(arg1 + 0x1ac) & 1) != 0)
        int64_t* rcx_2 = arg1[3]
        
        if (rcx_2 != 0)
            rdx_1 = (**rcx_2)(rcx_2, 1)
    
    arg1[0x12] = 0
    arg1[3] = 0
    *(arg1 + 0x194) = 0
    arg1[0x35].d
    arg1[0x35].d = 0
    arg1[0x33].d
    arg1[0x33].d = 0
    *(arg1 + 0x1ac) &= 0xfffffffe

return sub_141e6c0f0(arg1, zmm0, rdx_1) __tailcall
