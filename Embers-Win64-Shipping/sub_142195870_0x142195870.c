// 函数: sub_142195870
// 地址: 0x142195870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void** result = *(arg1 + 8)

if (result[1].b == 0)
    void* rdi_1 = *(arg1 + 0x28)
    
    if (rdi_1 != 0)
        int64_t* rdi_2 = *(rdi_1 + 0x88)
        
        if (rdi_2 != 0)
            void** var_f8
            sub_140b4c4f0(&var_f8, sx.q(*(arg1 + 0xe8) + 0xe4), 0)
            int64_t rcx_1 = sx.q(*(arg1 + 0xe8))
            
            if (rcx_1.d s> 0)
                char* rdx_3 = arg1 + 0xd0
                char* rax_4 = *(rdx_3 + 0x10)
                
                if (rax_4 != 0)
                    rdx_3 = rax_4
                
                sub_140b53d10(&var_f8, rdx_3, rcx_1)
            
            sub_140b560b0(&var_f8, 1)
            sub_140b560b0(&var_f8, *(arg1 + 0xb4) != 0)
            sub_140b560b0(&var_f8, 0)
            int64_t var_38
            __builtin_memset(&var_38, 0, 0x1c)
            sub_140b53380(&var_f8, &var_38, 0x1c)
            int64_t performanceCount = 0
            int64_t var_100_1 = 0
            sub_1405947f0(&performanceCount, 0x12)
            int32_t rax_5 = var_100_1.d + 0x12
            var_100_1.d = rax_5
            
            if (rax_5 s> 0)
                sub_140594770(&performanceCount)
            
            UnDecorator::getReferenceType(performanceCount, u"PostPacketHandler", 0x24)
            
            if (performanceCount != 0)
                sub_140a74f90(performanceCount)
            
            sub_140b560b0(&var_f8, 1)
            *(*(arg1 + 8) + 0x290) = 1
            int64_t* rcx_12 = rdi_2[0xb]
            int64_t var_68
            
            if ((*(*rcx_12 + 0x388))(rcx_12) != 0)
                int64_t rax_9 = *rdi_2
                performanceCount.b = 1
                performanceCount = 0
                var_100_1:4.w = 0
                int32_t var_58
                (*(rax_9 + 0x288))(rdi_2, var_68, zx.q(var_58), &performanceCount, 
                    performanceCount, var_100_1)
            
            *(*(arg1 + 8) + 0x290) = 0
            QueryPerformanceCounter(&performanceCount)
            *(arg1 + 0x78) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            result = sub_140b4cb40(&var_f8)

__security_check_cookie(rax_1 ^ &var_128)
return result
