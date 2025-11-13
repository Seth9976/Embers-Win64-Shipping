// 函数: sub_140a6d600
// 地址: 0x140a6d600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4

if (arg2 u< 4)
    i_4 = 1
else
    uint32_t rax_1 = arg2 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_1 + 8)
    int32_t rcx
    
    if (rax_1 == 0xfffffff8)
        rcx = 0x20
    else
        rcx = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_1 + 7)
    
    if (rax_1 == 0xfffffff9)
        i_4 = 1
    else
        i_4 = 1 << ((not.d(rcx << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

uint64_t result

if (arg2 s> 0)
    result = zx.q(*(arg1 + 0x48))
    
    if (result.d == 0 || result.d s< i_4)
    label_140a6d69f:
        *(arg1 + 0x48) = i_4
        int64_t rbp = *(arg1 + 0x40)
        
        if (rbp != 0)
            int64_t* rcx_5 = data_143ddb3f0
            
            if (rcx_5 == 0)
                sub_140a750a0()
                rcx_5 = data_143ddb3f0
            
            *(arg1 + 0x40) = (*(*rcx_5 + 0x20))(rcx_5, rbp, 0, 0)
            i_4 = *(arg1 + 0x48)
        
        if (i_4 != 0)
            sub_1405a4aa0(arg1 + 0x38, 0, i_4, 4)
            
            if (i_4 s> 0)
                int64_t r8_2 = 0
                uint64_t i_3 = zx.q(i_4)
                uint64_t i
                
                do
                    void* rcx_7 = *(arg1 + 0x40)
                    void* rax_4 = arg1 + 0x38
                    int64_t rdx_3 = (sx.q(*(arg1 + 0x48)) - 1) & r8_2
                    
                    if (rcx_7 != 0)
                        rax_4 = rcx_7
                    
                    r8_2 += 1
                    *(rax_4 + (rdx_3 << 2)) = 0xffffffff
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            int64_t* var_38
            sub_1407453e0(&var_38, arg1)
            uint64_t var_28
            int32_t i_2
            
            for (int32_t i_1 = i_2; i_1 s< *(var_28 + 0x18); i_1 = i_2)
                int64_t rdx_5 = sx.q(i_1) * 5
                int64_t rcx_9 = *var_38
                int64_t* rbx = rcx_9 + (rdx_5 << 3)
                int16_t* rcx_10
                
                if (*(rcx_9 + (rdx_5 << 3) + 8) == 0)
                    rcx_10 = &data_142d40450
                else
                    rcx_10 = *rbx
                
                int32_t rax_8 = sub_140a5ff80(rcx_10, 0) & (*(arg1 + 0x48) - 1)
                *(rbx + 0x24) = rax_8
                void* rdx_6 = *(arg1 + 0x40)
                int64_t r8_3 = sx.q(rax_8)
                void* rax_9 = arg1 + 0x38
                
                if (rdx_6 != 0)
                    rax_9 = rdx_6
                
                rbx[4].d = *(rax_9 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_3) << 2))
                void* rax_11 = arg1 + 0x38
                void* rcx_16 = *(arg1 + 0x40)
                
                if (rcx_16 != 0)
                    rax_11 = rcx_16
                
                *(rax_11 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_3) << 2)) = i_1
                int32_t var_2c
                int32_t var_20 = var_20 & not.d(var_2c)
                void var_30
                sub_14059bdd0(&var_30)
        
        result.b = 1
        return result
    
    if (result.d s> i_4 && arg3 != 0)
        goto label_140a6d69f

result.b = 0
return result
