// 函数: sub_14291a330
// 地址: 0x14291a330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r14 = 0
int32_t rbx = 0
int32_t* r13 = nullptr
int64_t* rbp = nullptr
int64_t* rdi = nullptr

if (sub_142890560(*(arg1 + 8)) s> 0x2710)
    sub_1428a5670(5, 0x67, 0x67, "crypto\dh\dh_key.c", 0x56)
    return 0

int64_t* rax_2 = sub_1428d8d60()
int64_t* rax_15

if (rax_2 == 0)
label_14291a4f6:
    sub_1428a5670(5, 0x67, 3, "crypto\dh\dh_key.c", 0x97)
    rax_15 = *(arg1 + 0x20)
else
    rdi = *(arg1 + 0x28)
    
    if (rdi == 0)
        int64_t* rax_3 = sub_142890740()
        rdi = rax_3
        
        if (rax_3 == 0)
            goto label_14291a4f6
        
        rbx = 1
    
    rbp = *(arg1 + 0x20)
    
    if (rbp == 0)
        int64_t* rax_4 = sub_142890500()
        rbp = rax_4
        
        if (rax_4 == 0)
            goto label_14291a4f6
    
    int32_t* rax_5
    
    if ((*(arg1 + 0x30) & 1) != 0)
        rax_5 = sub_1428cc990(arg1 + 0x38, *(arg1 + 0x88), *(arg1 + 8), rax_2)
        r13 = rax_5
    
    if ((*(arg1 + 0x30) & 1) != 0 && rax_5 == 0)
        goto label_14291a4f6
    
    if (rbx != 0)
        if (*(arg1 + 0x40) == 0)
            int32_t rax_9 = *(arg1 + 0x18)
            
            if (rax_9 == 0)
                rax_9 = sub_142890560(*(arg1 + 8)) - 1
            
            if (sub_142919890(rdi, rax_9, 0, 0) == 0)
                goto label_14291a4f6
        else
            while (true)
                if (sub_1429198c0(rdi, *(arg1 + 0x40)) == 0)
                    goto label_14291a4f6
                
                if (sub_142890300(rdi) == 0 && sub_1428902b0(rdi) == 0)
                    break
    
    int64_t* rax_12 = sub_142890500()
    
    if (rax_12 == 0)
        goto label_14291a4f6
    
    sub_142890a00(rax_12, rdi, 4)
    int32_t var_48
    var_48.q = *(arg1 + 8)
    int32_t rax_14 =
        (*(*(arg1 + 0x78) + 0x18))(arg1, rbp, *(arg1 + 0x10), rax_12, var_48, rax_2, r13)
    sub_1428901a0(rax_12)
    
    if (rax_14 == 0)
        goto label_14291a4f6
    
    *(arg1 + 0x20) = rbp
    r14 = 1
    *(arg1 + 0x28) = rdi
    rax_15 = rbp

if (rbp != rax_15)
    sub_1428901a0(rbp)

if (rdi != *(arg1 + 0x28))
    sub_1428901a0(rdi)

sub_1428d8ae0(rax_2)
return zx.q(r14)
