// 函数: sub_14243e7c0
// 地址: 0x14243e7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t r12 = 0
int64_t rbx_1 = *(arg1[4] + 0x18)
arg_8.q = rbx_1
uint64_t rcx_3

if (data_143a305d8 == data_143a30604)
label_14243e86a:
    rcx_3 = 0
else
    int32_t rax_2 = sub_140b5ead0(rbx_1.d) + arg2
    void* rcx_1 = data_143a30610
    void* rax_4 = &data_143a30608
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_143a30618) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_14243e86a_1:
        rcx_3 = 0
    else
        int64_t r8_1 = data_143a305d0
        int64_t rdx_5
        
        while (true)
            rdx_5 = sx.q(rax_5) * 0x14
            
            if (*(rdx_5 + r8_1) == rbx_1)
                break
            
            rax_5 = *(rdx_5 + r8_1 + 0xc)
            
            if (rax_5 == 0xffffffff)
                goto label_14243e86a_2
        
        rcx_3 = rdx_5 + r8_1
        
        if (rax_5 == 0xffffffff)
        label_14243e86a_2:
            rcx_3 = 0

char* rax_6 = rcx_3 + 8

if (rcx_3 == 0)
    rax_6 = nullptr

if (rax_6 == 0)
    rcx_3.b = 7
else
    rcx_3 = zx.q(*rax_6)

*(arg1 + 0x11a) = rcx_3.b
sub_140ce3290(arg1)
int32_t i = 0
int32_t rsi = 1

while (i s>= 0)
    int32_t rcx_5 = arg1[0x14].d
    
    if (i s>= rcx_5)
        break
    
    void** rdx_6 = arg1[0x13]
    int64_t* r14_1 = rdx_6[sx.q(i)]
    
    if (r14_1 == 0)
        int32_t rax_23 = rcx_5 - i
        
        if (rax_23 != 1)
            memmove(&rdx_6[sx.q(i)], &rdx_6[sx.q(rsi)], (rax_23 - 1) << 3)
            rcx_5 = arg1[0x14].d
        
        arg1[0x14].d = rcx_5 - 1
        sub_1405c53d0(&arg1[0x13])
    else
        int64_t var_58
        char rax_14
        
        if (arg1[6] != 0)
            arg_8.q = 0
            int64_t var_60
            __builtin_memset(&var_60, 0, 0x18)
            int32_t var_70 = 0xffffffff
            int64_t var_6c_1 = 0
            void var_88
            int64_t* rax_9 = sub_140d21d60(&var_88, arg1)
            var_60 = *rax_9
            
            if (&var_58 != &rax_9[1])
                int64_t rcx_8 = var_58
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                var_58 = rax_9[1]
                rax_9[1] = 0
                int64_t var_50_1
                var_50_1.d = rax_9[2].d
                var_50_1:4.d = *(rax_9 + 0x14)
                rax_9[2] = 0
            
            int64_t var_80
            
            if (var_80 != 0)
                sub_140a74f90(var_80)
            
            sub_140d3a3a0(&var_70, arg1)
            int32_t rax_13 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_13 = data_1439aaa30
            
            var_6c_1:4.d = rax_13
            r12 |= 1
            rax_14 = sub_140d16af0(&r14_1[7], &var_60)
        
        void* r15
        
        if (arg1[6] != 0 && (rax_14 != 0 || r14_1[0x25] == arg1[6]))
            r15.b = 1
        else
            r15.b = 0
        
        if ((r12.b & 1) != 0)
            int64_t rcx_12 = var_58
            r12 &= 0xfffffffe
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        
        if (r15.b == 0)
            sub_1420e7800(r14_1)
            
            if (sub_1420e12d0(r14_1) != 0)
                sub_14242d040(&arg1[0x15], r14_1, 0)
                i += 1
                rsi += 1
                continue
        else
            int32_t rcx_13 = arg1[0x14].d
            int32_t rax_17 = rcx_13 - i
            
            if (rax_17 != 1)
                int64_t rcx_14 = arg1[0x13]
                memmove(rcx_14 + (sx.q(i) << 3), rcx_14 + (sx.q(rsi) << 3), (rax_17 - 1) << 3)
                rcx_13 = arg1[0x14].d
            
            arg1[0x14].d = rcx_13 - 1
            sub_1405c53d0(&arg1[0x13])
            i -= 1
            rsi -= 1
            sub_140d25500(arg1)
        
        i += 1
        rsi += 1

if (data_143f5ecb8 == 0)
    sub_140d21fd0()
    void*** rax_27 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_27 != 0)
        *rax_27 = &data_142d40dc0
        rax_27[1] = sub_14243ec70
        rax_27[3] = sub_140a387b0()
        *rax_27 = &data_142d40e18
    
    if (rax_27 != 0)
        sub_140599630(&data_1439aad30, 1)
        void arg_18
        (*rax_27)[6](rax_27, &arg_18)
        int64_t rsi_2 = sx.q(data_1439aad38)
        int32_t rax_30 = (rsi_2 + 1).d
        data_1439aad38 = rax_30
        
        if (rax_30 s> data_1439aad3c)
            sub_1405a4f90(&data_1439aad30)
        
        void** rax_33 = (rsi_2 << 4) + data_1439aad30
        *rax_33 = rax_27
        rax_33[1].d = 2
    
    sub_140d21f60()
    void*** rax_34 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_34 != 0)
        *rax_34 = &data_142d40dc0
        rax_34[1] = sub_14244ab20
        rax_34[3] = sub_140a387b0()
        *rax_34 = &data_142d40e18
    
    if (rax_34 != 0)
        sub_140599630(&data_1439aad48, 1)
        void arg_20
        (*rax_34)[6](rax_34, &arg_20)
        int64_t rsi_3 = sx.q(data_1439aad50)
        int32_t rax_37 = (rsi_3 + 1).d
        data_1439aad50 = rax_37
        
        if (rax_37 s> data_1439aad54)
            sub_1405a4f90(&data_1439aad48)
        
        void** rax_40 = (rsi_3 << 4) + data_1439aad48
        *rax_40 = rax_34
        rax_40[1].d = 2
    
    data_143f5ecb8 = 1

return sub_140594850() __tailcall
