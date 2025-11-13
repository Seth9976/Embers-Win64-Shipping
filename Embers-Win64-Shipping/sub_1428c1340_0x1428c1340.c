// 函数: sub_1428c1340
// 地址: 0x1428c1340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
int64_t* rbx = nullptr
int64_t* rsi = nullptr
int64_t* rax = sub_1428d8d60()

if (rax != 0)
    rbx = *(arg1 + 0x28)
    
    if (rbx != 0)
    label_1428c1395:
        int64_t* rax_2 = sub_14060aa60(*(arg1 + 0x18))
        
        if (rax_2 != 0)
            while (sub_1429198c0(rbx, rax_2) != 0)
                if (sub_142890300(rbx) == 0)
                    rsi = *(arg1 + 0x20)
                    
                    if (rsi != 0)
                    label_1428c13de:
                        int64_t* var_20_1 = rax
                        
                        if (sub_1428bfa20(*(arg1 + 0x18), rsi, rbx, 0, nullptr) != 0)
                            *(arg1 + 0x28) = rbx
                            rbp = 1
                            *(arg1 + 0x20) = rsi
                    else
                        int64_t* rax_5 = sub_1428bfa80(*(arg1 + 0x18))
                        rsi = rax_5
                        
                        if (rax_5 != 0)
                            goto label_1428c13de
                    
                    break
    else
        int64_t* rax_1 = sub_142890500()
        rbx = rax_1
        
        if (rax_1 != 0)
            goto label_1428c1395

if (*(arg1 + 0x20) == 0)
    sub_1428bf6a0(rsi)

if (*(arg1 + 0x28) != rbx)
    sub_1428901a0(rbx)

sub_1428d8ae0(rax)
return zx.q(rbp)
