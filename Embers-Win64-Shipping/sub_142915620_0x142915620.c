// 函数: sub_142915620
// 地址: 0x142915620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* r14 = arg1[5]

if (*(r14 + 8) != 0)
label_142915667:
    void* rax_3 = sub_142897100()
    
    if (rax_3 != 0)
        int32_t rbp = 0
        int32_t* rsi
        
        if (arg1[7] == 0)
            rsi = nullptr
        label_1429156c7:
            int32_t rax_6 = sub_14294e3b0(rax_3, zx.q(*r14), zx.q(r14[4]), *(r14 + 8), rsi)
            sub_14288f9a0(rsi)
            
            if (rax_6 s<= 0)
                sub_142896f90(rax_3)
                return zx.q(rax_6)
            
            void* rdx_2 = arg1[5]
            
            if (**arg1 != 0x390)
                sub_142896310(arg2, **arg1, rax_3)
                return zx.q(rax_6)
            
            char* rcx_5 = *(rdx_2 + 0x20)
            
            if (rcx_5 == 0 && *(rdx_2 + 0x28) == 0 && *(rdx_2 + 0x30) == 0xfffffffe)
                sub_142896310(arg2, **arg1, rax_3)
                return zx.q(rax_6)
            
            if (*(rdx_2 + 0x30) != 0xfffffffe)
                rbp = *(rdx_2 + 0x30)
            
            int64_t* rax_7 = sub_1429104b0(rcx_5, *(rdx_2 + 0x28), rbp)
            *(rax_3 + 0x60) = rax_7
            
            if (rax_7 != 0)
                sub_142896310(arg2, **arg1, rax_3)
                return zx.q(rax_6)
        else
            int32_t* rax_5 = sub_14288f9d0()
            rsi = rax_5
            
            if (rax_5 != 0)
                sub_1428c2dc0(rax_5, arg1)
                goto label_1429156c7
        sub_142896f90(rax_3)
else
    int64_t* rax_1 = sub_142890500()
    *(r14 + 8) = rax_1
    
    if (rax_1 != 0 && sub_142890900(rax_1, 0x10001) != 0)
        goto label_142915667

return 0
