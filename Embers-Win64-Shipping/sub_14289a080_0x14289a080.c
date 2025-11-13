// 函数: sub_14289a080
// 地址: 0x14289a080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rsi = sx.q(arg3)
uint64_t arg_8 = 0

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0x38) != 0)
        if (arg3 s< 0)
            sub_1428a5670(0x20, 0x68, 0x7d, "crypto\bio\bio_lib.c", 0x1bb)
            return 0
        
        int64_t r11 = arg1[1]
        int32_t var_28
        int64_t var_20
        
        if (r11 != 0 || arg1[2] != 0)
            int64_t r10_1 = arg1[2]
            int32_t rax_4
            
            if (r10_1 != 0)
                var_20 = 0
                var_28 = 1
                rax_4 = r10_1(arg1, 5, arg2, rsi, 0, 0, 1, 0)
            label_14289a168:
                
                if (rax_4 s<= 0)
                    return zx.q(rax_4)
                
                goto label_14289a172
            
            if (rsi u<= 0x7fffffff)
                rax_4 = r11(arg1, 5, arg2, zx.q(rsi.d), 0, 1)
                goto label_14289a168
        else
        label_14289a172:
            
            if (arg1[4].d == 0)
                sub_1428a5670(0x20, 0x68, 0x78, "crypto\bio\bio_lib.c", 0x1c6)
                return 0xfffffffe
            
            int32_t rax_7 = (*(*arg1 + 0x38))(arg1, arg2, zx.q(rsi.d))
            uint64_t rcx_1 = sx.q(rax_7)
            uint64_t rdx_1
            
            if (rax_7 s<= 0)
                rdx_1 = arg_8
            else
                rdx_1 = rcx_1
                arg_8 = rcx_1
                rcx_1 = 1
            
            int64_t r10_2 = arg1[1]
            
            if (r10_2 == 0 && arg1[2] == 0)
                goto label_14289a221
            
            int64_t rax_8 = arg1[2]
            
            if (rax_8 != 0)
                rcx_1 = zx.q(rax_8(arg1, 0x85, arg2, rsi, 0, 0, rcx_1.d, &arg_8))
            label_14289a21c:
                rdx_1 = arg_8
            label_14289a221:
                
                if (rcx_1.d s<= 0)
                    return zx.q(rcx_1.d)
                
                if (rdx_1 u> rsi)
                    rdx_1 = 0xffffffff
                
                return zx.q(rdx_1.d)
            
            if (rsi.d u<= 0x7fffffff)
                if (rcx_1.d == 0)
                    goto label_14289a273
                
                if (rdx_1 u<= 0x7fffffff)
                    rcx_1 = zx.q(rdx_1.d)
                label_14289a273:
                    int32_t rax_10 =
                        r10_2(arg1, 0x85, arg2, zx.q(rsi.d), 0, rcx_1.d, var_28, var_20)
                    rcx_1 = sx.q(rax_10)
                    
                    if (rax_10 s< 0)
                        goto label_14289a21c
                    
                    rdx_1 = rcx_1
                    rcx_1 = 1
                    goto label_14289a221
        return 0xffffffff

sub_1428a5670(0x20, 0x68, 0x79, "crypto\bio\bio_lib.c", 0x1b6)
return 0xfffffffe
