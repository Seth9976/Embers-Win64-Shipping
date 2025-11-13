// 函数: sub_142366930
// 地址: 0x142366930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int32_t arg_18 = 0xffffffff
int32_t arg_1c = 0
int32_t arg_8

if (arg3 != 0)
    sub_140d3a3a0(&arg_8, arg3)
    arg_18.q = arg_8.q

sub_1423611b0(arg1 + 0x40, &arg_8, &arg_18)
int64_t rax_2 = sx.q(arg_8)
int128_t zmm0
uint128_t zmm1

if (rax_2.d == 0xffffffff)
label_1423669f1:
    TEB* gsbase
    
    if (data_143f596a8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f596a8)
        
        if (data_143f596a8 == 0xffffffff)
            sub_140d921c0(&data_143f59670)
            _Init_thread_footer(&data_143f596a8)
    
    zmm1 = data_143f59680
    *arg2 = data_143f59670
    zmm0 = data_143f59690
    arg2[1] = zmm1
    zmm1 = zx.o(data_143f596a0)
else
    int64_t rcx_3 = rax_2 << 5
    void* rcx_4 = rcx_3 + *(arg1 + 0x40)
    
    if (rcx_3 == neg.q(*(arg1 + 0x40)))
        goto label_1423669f1
    
    rbx = *(rcx_4 + 0x10)
    void* rax_3 = *(rcx_4 + 8)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    if (rax_3 == 0)
        goto label_1423669f1
    
    int128_t* rax_4 = sub_140e12190(*(rax_3 + 0x10))
    zmm1 = rax_4[1]
    *arg2 = *rax_4
    zmm0 = rax_4[2]
    arg2[1] = zmm1
    zmm1 = zx.o(rax_4[3].q)

arg2[2] = zmm0
arg2[3].q = zmm1.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
