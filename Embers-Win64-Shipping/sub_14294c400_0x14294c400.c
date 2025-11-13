// 函数: sub_14294c400
// 地址: 0x14294c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rdx = *(*(arg1 + 0x50) + 0x58)

if (rdx != 0)
    jump(rdx)

int32_t r14 = 0
int64_t* rbp = nullptr
int64_t* rdi = nullptr
int64_t* rax_1 = sub_1428d8d60()

if (rax_1 != 0)
    rdi = *(arg1 + 0x28)
    
    if (rdi != 0)
    label_14294c477:
        
        while (sub_1429198c0(rdi, *(arg1 + 0x10)) != 0)
            if (sub_142890300(rdi) == 0)
                rbp = *(arg1 + 0x20)
                
                if (rbp != 0)
                label_14294c4ab:
                    int64_t* rax_6 = sub_142890500()
                    
                    if (rax_6 != 0)
                        sub_142890a00(rax_6, rdi, 4)
                        int32_t rax_7 =
                            sub_142905ff0(rbp, *(arg1 + 0x18), rax_6, *(arg1 + 8), rax_1)
                        sub_1428901a0(rax_6)
                        
                        if (rax_7 != 0)
                            *(arg1 + 0x28) = rdi
                            r14 = 1
                            *(arg1 + 0x20) = rbp
                else
                    int64_t* rax_5 = sub_142890500()
                    rbp = rax_5
                    
                    if (rax_5 != 0)
                        goto label_14294c4ab
                
                break
    else
        int64_t* rax_2 = sub_142890740()
        rdi = rax_2
        
        if (rax_2 != 0)
            goto label_14294c477

if (rbp != *(arg1 + 0x20))
    sub_1428901a0(rbp)

if (rdi != *(arg1 + 0x28))
    sub_1428901a0(rdi)

sub_1428d8ae0(rax_1)
return zx.q(r14)
