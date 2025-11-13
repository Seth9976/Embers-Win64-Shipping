// 函数: sub_140edd2b0
// 地址: 0x140edd2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*(arg1 + 8) + 0x1c8))(arg1 + 8) == 0)
    __builtin_memcpy(arg2, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
        0x11)
    *(arg2 + 0x18) = 0
    *(arg2 + 0x20) = 0
    return arg2

void* rax_2 = nullptr
int64_t* rbx = *(arg1 + 0x3a0)

if (rbx != 0)
    int32_t rcx_1 = rbx[1].d
    
    if (rcx_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rcx_1 + 1
        rax_2 = *(arg1 + 0x398)

int64_t* rsi_1 = *(*(rax_2 + 0x3a0) + 0x60)
TEB* gsbase

if (data_143e2a0c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a0c0)
    
    if (data_143e2a0c0 == 0xffffffff)
        sub_140b58170(&data_143e2a0b8, "SelectionColor", 1)
        _Init_thread_footer(&data_143e2a0c0)

(*(*rsi_1 + 0x38))(rsi_1, arg2, data_143e2a0b8, 0, &data_1439ae6e0)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
