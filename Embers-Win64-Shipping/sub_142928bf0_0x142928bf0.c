// 函数: sub_142928bf0
// 地址: 0x142928bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x30)
int32_t* rbp = nullptr
int64_t* rdi = nullptr

if (arg1 == 0)
label_142928cd7:
    int64_t* rbx_2 = nullptr
    int32_t rsi_1 = 0
    
    if (sub_1428bc4d0() s> 0)
        int32_t rax_14
        
        do
            int64_t arg_8 = arg_18
            
            if (rbx_2 == 0)
                int64_t* rax_9 = sub_1428968f0()
                rbx_2 = rax_9
                
                if (rax_9 == 0)
                    sub_1428a5670(0x2c, 0x79, 6, "crypto\store\loader_file.c", 0x225)
                    break
            
            int32_t* rax_10 = sub_1428bc420(rsi_1)
            
            if ((rax_10[2].b & 1) == 0 && sub_142896cb0(rbx_2, *rax_10) != 0)
                void* rax_12 = sub_14060aa60(rbx_2)
                
                if (rax_12 != 0)
                    int64_t r9_1 = *(rax_12 + 0x70)
                    
                    if (r9_1 != 0 && r9_1(rbx_2, &arg_8, zx.q(arg4)) != 0)
                        if (rdi == 0)
                            rdi = rbx_2
                        else
                            sub_1428965a0(rbx_2)
                        
                        *arg5 += 1
                        rbx_2 = nullptr
            
            rsi_1 += 1
            rax_14 = sub_1428bc4d0()
        while (rsi_1 s< rax_14)
    
    sub_1428965a0(rbx_2)
    
    if (*arg5 != 1)
        sub_1428965a0(rdi)
        return rbp
else
    int32_t rax_1 = sub_1428bb2f0(arg1, "PARAMETERS")
    
    if (rax_1 == 0)
        return 0
    
    *arg5 = 1
    
    if (rax_1 s<= 0)
        goto label_142928cd7
    
    int64_t* rax_2 = sub_1428968f0()
    rdi = rax_2
    
    if (rax_2 == 0)
        sub_1428a5670(0x2c, 0x79, 6, "crypto\store\loader_file.c", 0x213)
        return 0
    
    if (sub_142896db0(rdi, arg1, rax_1) == 0)
        sub_1428965a0(rdi)
        return rbp
    
    void* rax_5 = sub_14060aa60(rdi)
    
    if (rax_5 == 0)
        sub_1428965a0(rdi)
        return rbp
    
    int64_t r9 = *(rax_5 + 0x70)
    
    if (r9 == 0)
        sub_1428965a0(rdi)
        return rbp
    
    if (r9(rdi, &arg_18, zx.q(arg4)) == 0)
        sub_1428965a0(rdi)
        return rbp

int32_t* rax_15 = sub_1429693d0(rdi)

if (rax_15 != 0)
    return rax_15

sub_1428965a0(rdi)
return rax_15
