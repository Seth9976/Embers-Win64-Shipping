// 函数: sub_1428a33d0
// 地址: 0x1428a33d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t arg_20 = arg4
int64_t* rsi = arg2

if ((arg4 & 0x30000) == 0)
    return 0

int32_t rbx

if (arg2 != 0)
    rbx = 0
else
    rsi = sub_142898ea0(arg3, arg2.d)
    rbx = 1

char* rdi

if (rsi != 0)
    rdi = sub_1428a2680(rsi[0xa])
else
    rdi = nullptr

int32_t rcx_6

if (arg3 != 0)
    if (sub_1428a3b50(rsi) == 2)
        if (rdi != 0)
            if (sub_1406938b0(rdi) != 0x198)
                goto label_1428a35ec
            
            void* rax_11 = sub_142891590(sub_142896700(rdi))
            
            if (rax_11 == 0)
                goto label_1428a35ec
            
            int32_t rax_12 = sub_140611e80(rax_11)
            
            if (rax_12 != 0x2cb)
                if (rax_12 != 0x19f)
                    rcx_6 = 0x3a
                    goto label_1428a35f1
                
                if (not(test_bit(arg4, 0x10)))
                    rcx_6 = 0x3c
                    goto label_1428a35f1
            else
                if (not(test_bit(arg4, 0x11)))
                    rcx_6 = 0x3c
                    goto label_1428a35f1
                
                arg_20 = arg4 & 0xfffeffff
            
            if (rbx s>= sub_142898c70(arg3))
            label_1428a35da:
                rcx_6 = sub_1428a3960(rdi, sub_1428a2cb0(rsi), &arg_20)
                goto label_1428a35f3
            
            while (true)
                int32_t rax_16 = sub_1428a2cb0(rsi)
                int64_t* rax_17 = sub_142898ea0(arg3, rbx)
                rsi = rax_17
                
                if (sub_1428a3b50(rax_17) != 2)
                    rcx_6 = 0x38
                    goto label_1428a361a
                
                if (rsi != 0)
                    rdi = sub_1428a2680(rsi[0xa])
                else
                    rdi = nullptr
                
                int32_t rax_20 = sub_1428a3960(rdi, rax_16, &arg_20)
                rcx_6 = rax_20
                
                if (rax_20 != 0)
                    break
                
                rbx += 1
                
                if (rbx s>= sub_142898c70(arg3))
                    goto label_1428a35da
            
            goto label_1428a35fa
        
    label_1428a35ec:
        rcx_6 = 0x39
    label_1428a35f1:
        rbx = 0
    label_1428a35f3:
        
        if (rcx_6 != 0)
        label_1428a35fa:
            
            if (rcx_6 - 0x3b u> 1)
                goto label_1428a361a
            
            int32_t rax_25 = rbx - 1
            
            if (rbx == 0)
                rax_25 = rbx
            
            rbx = rax_25
            
            if (rcx_6 == 0x3c && arg4 != arg_20)
                rcx_6 = 0x3d
            
            goto label_1428a361a
    else
        rcx_6 = 0x38
        rbx = 0
    label_1428a361a:
        
        if (arg1 != 0)
            *arg1 = rbx
else if (rdi == 0)
    rcx_6 = 0x39
else if (sub_1406938b0(rdi) != 0x198)
    rcx_6 = 0x39
else
    void* rax_6 = sub_142891590(sub_142896700(rdi))
    
    if (rax_6 == 0)
        rcx_6 = 0x39
    else
        int32_t rax_7 = sub_140611e80(rax_6)
        
        if (rax_7 != 0x2cb)
            if (rax_7 != 0x19f)
                rcx_6 = 0x3a
            else if (test_bit(arg4, 0x10))
                rcx_6 = 0
            else
                rcx_6 = 0x3c
        else if (test_bit(arg4, 0x11))
            rcx_6 = 0
        else
            rcx_6 = (&arg3[0xf]).d

return zx.q(rcx_6)
