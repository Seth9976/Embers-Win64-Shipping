// 函数: sub_140d878d0
// 地址: 0x140d878d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_18 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != arg1 + 0x18)
    arg3 = var_18.o
    var_18.o = *(arg1 + 0x18)
    *(arg1 + 0x18) = arg3

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx, arg3)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_3 = *(arg1 + 0xd8)
(*(*rcx_3 + 0x18))(rcx_3, arg2)
TEB* gsbase

if (data_143e20738 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20738)
    
    if (data_143e20738 == 0xffffffff)
        sub_140b58260(&data_143e20730, u"InputDevice", 1)
        _Init_thread_footer(&data_143e20738)

int64_t rbx_1 = data_143e20730
sub_140a387e0()
int64_t* result = sub_140d6fcf0(&data_14399e720, &var_18, rbx_1)

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0xf0))
        break
    
    int64_t* rcx_8 = *(*(arg1 + 0xe8) + sx.q(i) * 0x10)
    result = (*(*rcx_8 + 0x18))(rcx_8, arg2)

int64_t rcx_9 = var_18

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
