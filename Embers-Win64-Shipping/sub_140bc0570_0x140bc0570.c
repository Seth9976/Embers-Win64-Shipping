// 函数: sub_140bc0570
// 地址: 0x140bc0570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bc78f0(&arg1[2], arg1)
int64_t r14 = 0xffffffff

if ((*(arg1 + 0x1a) & 1) == 0)
    sub_140bd1d60(arg1[1].d)
    arg1[1].d = 0xffffffff

arg1[3].d = 0
int64_t rbx = sx.q(arg2[1].d)
int32_t var_58

if (rbx.d != 0xffffffff)
    AcquireSRWLockExclusive(&data_143e1a888)
    sub_140bc2b00(&data_1439a9a50, &var_58)
    int64_t rax_1 = data_1439a9a50
    r14 = sx.q(var_58)
    int64_t rdx_3 = rbx * 2
    int64_t* rcx_4 = (r14 << 4) + rax_1
    int64_t rbx_1 = *(rax_1 + (rdx_3 << 3))
    *rcx_4 = rbx_1
    rcx_4[1] = *(rax_1 + (rdx_3 << 3) + 8)
    void* rcx_8
    
    if (data_1439a9a08 == data_1439a9a34)
    label_140bc068a:
        rcx_8 = nullptr
    else
        int32_t rax_5 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* rcx_6 = data_1439a9a40
        void* rax_7 = &data_1439a9a38
        
        if (rcx_6 != 0)
            rax_7 = rcx_6
        
        int32_t rax_8 = *(rax_7 + (((sx.q(data_1439a9a48) - 1) & sx.q(rax_5)) << 2))
        
        if (rax_8 == 0xffffffff)
        label_140bc068a_1:
            rcx_8 = nullptr
        else
            int64_t r8_1 = data_1439a9a00
            int64_t rdx_8
            
            while (true)
                rdx_8 = sx.q(rax_8) * 0x28
                
                if (*(rdx_8 + r8_1) == rbx_1)
                    break
                
                rax_8 = *(rdx_8 + r8_1 + 0x20)
                
                if (rax_8 == 0xffffffff)
                    goto label_140bc068a_2
            
            rcx_8 = rdx_8 + r8_1
            
            if (rax_8 == 0xffffffff)
            label_140bc068a_2:
                rcx_8 = nullptr
    
    void* rax_9 = rcx_8 + 8
    
    if (rcx_8 == 0)
        rax_9 = nullptr
    
    if (rax_9 != 0)
        *(rax_9 + 0x10) += 1
    
    ReleaseSRWLockExclusive(&data_143e1a888)

arg1[1].d = r14.d
arg1[3].d = arg2[3].d

if (((arg2[3].d u>> 0x11).b & 1) != 0)
    int64_t rax_17 = sub_140bc7f20(arg1)
    int64_t var_48
    sub_140bc8400(&var_48, arg1[1].d)
    int32_t rdx_14 = arg1[3].d
    int64_t var_40
    
    if (((rdx_14 u>> 0xb).b & 1) != 0)
        sub_140b0f020(&var_58, &var_40, &data_143e1a878)
    else if (((rdx_14 u>> 8).b & 1) != 0)
        int64_t* r8_5
        
        if ((not.b(rdx_14.b) & 1) == 0)
            r8_5 = &data_143e1a868
            
            if (((rdx_14 u>> 0xc).b & 1) == 0)
                r8_5 = &data_143e1a858
        else
            r8_5 = &data_143e1a848
        
        sub_140b0f020(&var_58, &var_40, r8_5)
    else
        int64_t rsi_1 = var_40
        var_58.q = 0
        int32_t var_38
        int32_t var_50_1 = var_38
        
        if (var_38 != 0)
            sub_1405a4c70(&var_58, var_38, 0)
            memcpy(var_58.q, rsi_1, var_38 * 2)
        else
            int32_t var_4c_1 = 0
    
    sub_140bcbb30(arg1, &var_58, var_48, rax_17)
    int64_t rcx_24 = var_58.q
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = var_40
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
else if (arg2[2] == 0)
    *arg1 = *arg2
else
    int64_t rax_13 = sub_140bc7f20(arg2)
    uint32_t count = rax_13.d
    int64_t rax_14 = sub_140a82f30(rax_13, 0)
    arg1[2] = rax_14
    
    if (((arg2[3].d u>> 0x11).b & 1) != 0)
        int64_t* rax_15 = arg2[2]
        
        if (rax_15 == 0)
            memcpy(rax_14, 0, count)
        else
            int64_t rdx_10 = *rax_15
            
            if (rdx_10 != 0)
                memcpy(rax_14, rdx_10, count)
            else
                void* rdx_11 = rax_15[2]
                
                if (rdx_11 == 0)
                    memcpy(rax_14, 0, count)
                else
                    memcpy(rax_14, *(rdx_11 + 8), count)
    else
        memcpy(rax_14, arg2[2], count)

return arg1
