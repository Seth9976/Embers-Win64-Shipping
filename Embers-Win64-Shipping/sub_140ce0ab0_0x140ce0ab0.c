// 函数: sub_140ce0ab0
// 地址: 0x140ce0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg2 + 0x18)
char* r14 = arg2
EnterCriticalSection(&arg1[0x28])
uint64_t rbx = rax

if (arg1[0x15].d == *(arg1 + 0xd4))
    goto label_140ce0b64

uint64_t arg_8 = rbx
int32_t rax_3 = sub_140b5ead0(rbx.d) + arg_8:4.d
void* r8_1 = &arg1[0x1b]
void* rcx_2 = *(r8_1 + 8)

if (rcx_2 != 0)
    r8_1 = rcx_2

int32_t rax_5 = *(r8_1 + (((sx.q(arg1[0x1d].d) - 1) & sx.q(rax_3)) << 2))

if (rax_5 == 0xffffffff)
label_140ce0b55:
    rbx = rax
label_140ce0b64:
    
    if (arg1[0x1f].d == *(arg1 + 0x124))
    label_140ce0bd9:
        
        while (true)
            int32_t var_48
            int64_t* var_40
            
            if (arg1[0xb].d == *(arg1 + 0x84))
            label_140ce0c90:
                uint64_t rbx_2 = *(r14 + 0x18)
                
                if (arg1[1].d == *(arg1 + 0x34))
                label_140ce0cf1:
                    r14 = *(r14 + 0x40)
                    
                    if (r14 != 0)
                        continue
                    
                    sub_14090a150(&arg1[0x1e], &var_48)
                    *var_40 = rax
                    var_40[1].d = 0xffffffff
                    sub_1407ec830(&arg1[0x1e], &arg_8, (rax u>> 0x20).d + sub_140b5ead0(rax.d), 
                        var_40, var_48, r14)
                    goto label_140ce0d49
                else
                    int32_t rax_21 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                    void* r8_4 = &arg1[7]
                    void* rcx_18 = *(r8_4 + 8)
                    
                    if (rcx_18 != 0)
                        r8_4 = rcx_18
                    
                    int32_t rax_23 = *(r8_4 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_21)) << 2))
                    
                    if (rax_23 == 0xffffffff)
                        goto label_140ce0cf1
                    
                    int64_t rdx_17 = *arg1
                    
                    while (true)
                        int64_t rcx_20 = sx.q(rax_23) * 2
                        
                        if (*(rdx_17 + (rcx_20 << 3)) == rbx_2)
                            break
                        
                        rax_23 = *(rdx_17 + (rcx_20 << 3) + 8)
                        
                        if (rax_23 == 0xffffffff)
                            goto label_140ce0cf1
                    
                    if (rax_23 == 0xffffffff)
                        goto label_140ce0cf1
            else
                int64_t* rax_13 = sub_140baac50(&var_48, sub_140d21d80(r14))
                int16_t* rdx_9
                
                if (rax_13[1].d == 0)
                    rdx_9 = &data_142d40450
                else
                    rdx_9 = *rax_13
                
                sub_140b58260(&arg_8, rdx_9, 1)
                int64_t rcx_12 = var_48.q
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                uint64_t rbx_1 = arg_8
                
                if (arg1[0xb].d == *(arg1 + 0x84))
                    goto label_140ce0c90
                
                int32_t rax_16 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                void* r8_3 = &arg1[0x11]
                void* rcx_14 = *(r8_3 + 8)
                
                if (rcx_14 != 0)
                    r8_3 = rcx_14
                
                int32_t rax_18 = *(r8_3 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_16)) << 2))
                
                if (rax_18 == 0xffffffff)
                    goto label_140ce0c90
                
                int64_t rdx_13 = arg1[0xa]
                
                while (true)
                    int64_t rcx_16 = sx.q(rax_18) * 2
                    
                    if (*(rdx_13 + (rcx_16 << 3)) == rbx_1)
                        break
                    
                    rax_18 = *(rdx_13 + (rcx_16 << 3) + 8)
                    
                    if (rax_18 == 0xffffffff)
                        goto label_140ce0c90
                
                if (rax_18 == 0xffffffff)
                    goto label_140ce0c90
            
            sub_14090a150(&arg1[0x14], &var_48)
            *var_40 = rax
            var_40[1].d = 0xffffffff
            sub_1407ec830(&arg1[0x14], &arg_8, (rax u>> 0x20).d + sub_140b5ead0(rax.d), var_40, 
                var_48, nullptr)
            rbx.b = 1
            break
    else
        arg_8 = rbx
        int32_t rax_8 = sub_140b5ead0(rbx.d) + arg_8:4.d
        void* r8_2 = &arg1[0x25]
        void* rcx_6 = *(r8_2 + 8)
        
        if (rcx_6 != 0)
            r8_2 = rcx_6
        
        int32_t rax_10 = *(r8_2 + (((sx.q(arg1[0x27].d) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
            goto label_140ce0bd9
        
        int64_t rdx_7 = arg1[0x1e]
        
        while (true)
            int64_t rcx_8 = sx.q(rax_10) * 2
            
            if (*(rdx_7 + (rcx_8 << 3)) == rbx)
                break
            
            rax_10 = *(rdx_7 + (rcx_8 << 3) + 8)
            
            if (rax_10 == 0xffffffff)
                goto label_140ce0bd9
        
        if (rax_10 == 0xffffffff)
            goto label_140ce0bd9
        
    label_140ce0d49:
        rbx.b = 0
else
    int64_t rdx_3 = arg1[0x14]
    
    while (true)
        int64_t rcx_4 = sx.q(rax_5) * 2
        
        if (*(rdx_3 + (rcx_4 << 3)) == rbx)
            break
        
        rax_5 = *(rdx_3 + (rcx_4 << 3) + 8)
        
        if (rax_5 == 0xffffffff)
            goto label_140ce0b55
    
    if (rax_5 == 0xffffffff)
        goto label_140ce0b55
    
    rbx.b = 1

if (arg1 != -0x140)
    LeaveCriticalSection(&arg1[0x28])

return zx.q(rbx.b)
