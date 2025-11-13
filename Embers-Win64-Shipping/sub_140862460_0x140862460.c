// 函数: sub_140862460
// 地址: 0x140862460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_1 = result
void* rcx = *(arg1 + 0xe60)

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    result = rax_1 u>> 0x1a
    
    if ((result.b & 1) == 0)
        int64_t* rax_2 = sub_140a242a0()
        void* rcx_1 = *(arg1 + 0xe60)
        void** var_30_1 = nullptr
        int32_t var_24_1 = 4
        int32_t i_2 = 1
        void* var_50 = rcx_1
        
        if (rcx_1 != 0)
            *(rcx_1 + 0x48) += 1
        
        int64_t r9_1 = *rax_2
        result = (*(r9_1 + 0x48))(rax_2, &var_50, 2, r9_1)
        void** rcx_3 = var_30_1
        void** rbx_1 = &var_50
        int32_t i_1 = i_2
        
        if (rcx_3 != 0)
            rbx_1 = rcx_3
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t* rcx_4 = *rbx_1
                
                if (rcx_4 != 0)
                    result = zx.q(rcx_4[9].d)
                    rcx_4[9].d -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(rcx_4)
                
                rbx_1 = &rbx_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rcx_3 = var_30_1
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)

int64_t* rcx_5 = *(arg1 + 0xe60)
*(arg1 + 0xe60) = 0

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        result = sub_140a2f6e0(rcx_5)

__security_check_cookie(result_1 ^ &var_78)
return result
