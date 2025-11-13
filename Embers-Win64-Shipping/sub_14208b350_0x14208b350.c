// 函数: sub_14208b350
// 地址: 0x14208b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((1 & (*(arg1 + 8) u>> 4).b) == 0)
    sub_14208b720()
    EnterCriticalSection(&data_143f47d50)
    int32_t rcx = data_143f47d48.d
    int32_t rdi_1 = 0
    
    if (rcx s> 0)
        int64_t* rsi_1 = nullptr
        int32_t rax_2
        
        do
            int64_t r9_1 = data_143f47d40
            rax_2 = rcx
            
            if (*(rsi_1 + r9_1) == arg1)
                int32_t rax_4 = rax_2 - rdi_1 - 1
                
                if (rax_4 s>= 1)
                    rax_4 = 1
                
                if (rax_4 != 0)
                    memcpy(r9_1 + (sx.q(rdi_1) << 3), r9_1 + (sx.q(rcx - rax_4) << 3), rax_4 << 3)
                    rcx = data_143f47d48.d
                
                data_143f47d48.d = rcx - 1
                sub_1405c53d0(&data_143f47d40)
                rax_2 = data_143f47d48.d
                rdi_1 -= 1
                rsi_1 -= 8
            
            rdi_1 += 1
            rsi_1 = &rsi_1[1]
            rcx = rax_2
        while (rdi_1 s< rax_2)
    
    LeaveCriticalSection(&data_143f47d50)
    int64_t rbx_1 = *(arg1 + 0x38)
    sub_140aae6a0()
    sub_140ac7160(&data_143db9ce0, rbx_1)

int64_t* var_20 = nullptr
int64_t var_28

if (arg1 + 0x28 != &var_28)
    *(arg1 + 0x28) = 0
    var_28 = 0
    sub_1405aeff0(arg1 + 0x30, &var_20)
    int64_t* rcx_5 = var_20
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            int64_t* rbx_2 = var_20
            (**rbx_2)(rbx_2)
            int32_t rdi_2 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_2 == 1)
                int64_t* rcx_7 = var_20
                (*(*rcx_7 + 8))(rcx_7, 1)

return sub_140cdba30(arg1) __tailcall
