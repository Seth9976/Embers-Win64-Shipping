// 函数: sub_141eac310
// 地址: 0x141eac310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_140ce8e10(arg1, arg2)
int32_t result = arg2[8].d
int32_t rsi = 0
int64_t var_48
int32_t var_40

if (result s< 0xf0 && result != 0xdd)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x28)
    
    if (*(arg1 + 0x28) != 0)
        void* rax_3 = sub_140d41340()
        
        if (rax_3 != 0)
            void* rdx_1 = *(arg1 + 0x28)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30
                    && rdx_1 != 0)
                void* rax_6
                void* r8_2
                rax_6, r8_2 = sub_140d41340()
                int64_t rax_7
                void* const rdx_2
                
                if (rax_6 != 0)
                    rdx_2 = *(arg1 + 0x28)
                    rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_6 == 0 || rax_7.d s> *(rdx_2 + 0x38)
                        || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rdx_2 = nullptr
                
                *(rdx_2 + 8) |= 0x40
                var_48 = 0
                var_40.q = 0
                uint64_t r10_1
                
                if (*(arg1 + 0x28) == 0)
                    r10_1 = nullptr
                else
                    void* rax_11
                    rax_11, r8_2 = sub_140d41340()
                    
                    if (rax_11 == 0)
                        r10_1 = nullptr
                    else
                        r10_1 = *(arg1 + 0x28)
                        int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                        
                        if (rax_12.d s> *(r10_1 + 0x38)
                                || *(*(r10_1 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                            r10_1 = nullptr
                
                r8_2.b = 1
                sub_140d3ccc0(r10_1, &var_48, r8_2.b, 0, 0)
                int32_t r8_3 = 0
                
                while (true)
                    int64_t rax_14
                    
                    if (r8_3 s< 0 || r8_3 s>= var_40)
                        rax_14.b = 0
                    else
                        rax_14.b = 1
                    
                    if (rax_14.b == 0)
                        break
                    
                    void* rdx_5 = *(var_48 + (sx.q(r8_3) << 3))
                    *(rdx_5 + 8) |= 0x40
                    r8_3 += 1
                
                int64_t rcx_6 = var_48
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
    
    void* rax_15
    int64_t rax_16
    void* rdx_6
    
    if (arg1 != 0)
        rax_15 = sub_14247bd50()
        rdx_6 = *(arg1 + 0x10)
        rax_16 = sx.q(*(rax_15 + 0x38))
    
    int64_t* rdx_7
    
    if (arg1 == 0 || rax_16.d s> *(rdx_6 + 0x38)
            || *(*(rdx_6 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30 || (arg2[5].b & 1) == 0
            || (*(arg1 + 0x59) & 2) == 0)
        rdx_7 = arg1 + 0x30
    else
        var_48 = 0
        rdx_7 = &var_48
    
    result = (*(*arg2 + 0x130))(arg2, rdx_7)

if ((arg2[5].b & 1) != 0)
    result = *(arg1 + 0x48) | *(arg1 + 0x44) | *(arg1 + 0x40) | *(arg1 + 0x3c)
    
    if (result == 0)
        sub_140d21e10(arg1, &var_48, 0)
        int32_t rdx_9 = var_40
        int32_t var_3c
        
        if (var_3c != rdx_9)
            sub_1405947f0(&var_48, rdx_9)
            rdx_9 = var_40
        
        if (rdx_9 != 0)
            rsi = rdx_9 - 1
        
        int64_t rcx_11 = &data_142d40450
        
        if (rdx_9 != 0)
            rcx_11 = var_48
        
        void var_38
        sub_140b3f690(rcx_11, zx.q(rsi * 2), &var_38)
        int64_t rcx_12 = var_48
        int32_t var_34
        *(arg1 + 0x3c) = var_34
        int32_t var_30
        *(arg1 + 0x40) = var_30
        int32_t var_2c
        *(arg1 + 0x44) = var_2c
        int32_t result_1
        result = result_1
        *(arg1 + 0x48) = result
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_78)
return result
