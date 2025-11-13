// 函数: sub_1426b1220
// 地址: 0x1426b1220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1426b2ca0(arg2)
int64_t rax_12

if (rax == 0)
    int64_t arg_8 = 0
    rax_12 = 0
else
    char rax_1 = sub_1426b21d0(rax, arg3 + 0x10)
    void* rdx_1 = *(rax + 0xc0)
    int64_t rdi_1 = 0
    void* const rsi_1
    
    if (rdx_1 == 0 || rax_1 == 0xff)
        rsi_1 = nullptr
    else
        char rax_2 = *(rdx_1 + 0x4c)
        
        if (rax_1 u< rax_2)
            void* rcx_5 = *(rdx_1 + 0x30)
            
            if (rcx_5 == 0)
                rsi_1 = nullptr
            else
                rsi_1 = sub_1426b21a0(rcx_5, rax_1)
        else
            rsi_1 = *(rdx_1 + 0x38) + (zx.q(rax_1) - zx.q(rax_2)) * 0x18
    
    if (rsi_1 == 0)
        rax_12 = data_143f720b8
    else
        void* rbx_1 = *(rsi_1 + 8)
        
        if (rbx_1 == 0)
            rax_12 = data_143f720b8
        else if (*(rbx_1 + 0x10) != sub_14272e2f0())
            rax_12 = data_143f720b8
        else
            if (*(rax + 0xd0) != 0 && zx.d(rax_1) s< *(rax + 0xe0))
                rdi_1 = zx.q(*(*(rax + 0xd8) + (zx.q(rax_1) << 1))) + *(rax + 0xc8)
            
            int64_t* rax_11 = rdi_1 + ((zx.q(*(*(rsi_1 + 8) + 0x2b) u>> 1) & 1) << 2)
            
            if (rax_11 == 0)
                rax_12 = data_143f720b8
            else
                rax_12 = *rax_11

*arg1 = rax_12
return arg1
