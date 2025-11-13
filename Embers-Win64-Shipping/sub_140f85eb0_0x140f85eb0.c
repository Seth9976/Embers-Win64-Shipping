// 函数: sub_140f85eb0
// 地址: 0x140f85eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
void* var_38 = __security_cookie ^ &var_508
int32_t zmm0 = sub_140e66040(data_143e29f28)
void* result

if (not(zmm0 f> *(arg1 + 0x3fc)))
    result = sub_140f4a5f0(*(arg1 + 0x3b0))

int64_t rdi

if (not(zmm0 f> *(arg1 + 0x3fc)) && (result.b != 0 || *(arg1 + 0x4e4) == result.b))
    rdi.b = 0
else
    rdi.b = 1

if (*(arg1 + 0x478) == 0)
    result.b = 0
else
    int64_t* rcx_2 = *(arg1 + 0x470)
    
    if (rcx_2 == 0)
        result.b = 0
    else if ((*(*rcx_2 + 0x28))(rcx_2).b == 0)
        result.b = 0
    else
        result.b = 1

if (rdi.b == 0 || result.b == 0)
    *(arg1 + 0x3fc) = 0
else
    int64_t* rcx_3
    
    if (*(arg1 + 0x478) == 0)
        rcx_3 = nullptr
    else
        rcx_3 = *(arg1 + 0x470)
    
    int64_t var_488
    result = (*(*rcx_3 + 0x48))(rcx_3, &var_488)
    
    if (var_488 != 0)
        *(arg1 + 0x4d0) = 0
        char* r14_1 = *(arg2 + 0x10)
        char* rax_3
        int32_t rsi_1
        
        if (r14_1 == 0)
            void var_2f8
            rax_3 = sub_140d947e0(&var_2f8)
            rsi_1 = 2
        else
            void var_198
            rax_3 = sub_140e52c00(&var_198, r14_1)
            rsi_1 = 0
        
        void var_458
        sub_140e52b70(&var_458, rax_3)
        
        if (rsi_1 != 0)
            void var_1a8
            sub_140596d80(&var_1a8)
            int64_t* var_1b0
            
            if (var_1b0 != 0)
                var_1b0[1].d -= 1
                
                if (var_1b0[1].d == 1)
                    (**var_1b0)(var_1b0)
                    int32_t temp4_1 = *(var_1b0 + 0xc)
                    *(var_1b0 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_1b0 + 8))(var_1b0, 1)
            
            void var_2f0
            sub_140d94d20(&var_2f0)
        
        if (r14_1 != 0)
            void var_48
            sub_140596d80(&var_48)
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t temp5_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            void var_190
            sub_140d94d20(&var_190)
        
        uint128_t zmm0_1 = var_488.o
        uint128_t var_478 = zmm0_1
        zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
        void* rax_8 = zmm0_1.q
        char var_4a7_1 = 0
        int32_t var_4a4 = 5
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
        
        int64_t* rcx_15 = *(arg1 + 0x10)
        void* rdx_3 = nullptr
        
        if (rcx_15 != 0)
            int32_t rax_9 = rcx_15[1].d
            
            if (rax_9 != 0)
                rcx_15[1].d = rax_9 + 1
                rax_9.b = 1
            
            if (rax_9.b == 0)
                rcx_15 = nullptr
            
            if (rcx_15 != 0)
                rdx_3 = *(arg1 + 8)
        
        char var_4b8_1 = 1
        void var_4a8
        char* var_4c0_1 = &var_4a8
        void* var_4a0 = rdx_3
        void* var_468
        sub_140e80850(data_143e29f28, &var_468, &var_4a0, &var_458, zmm0_1, &var_478, arg2 + 0x18, 
            &var_4a4, 1, &data_143dbb1f0, var_4c0_1, var_4b8_1)
        int64_t* var_460
        
        if (var_460 != 0)
            var_460[1].d -= 1
            
            if (var_460[1].d == 1)
                (**var_460)(var_460)
                int32_t temp8_1 = *(var_460 + 0xc)
                *(var_460 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_460 + 8))(var_460, 1)
        
        if (rcx_15 != 0)
            rcx_15[1].d -= 1
            
            if (rcx_15[1].d == 1)
                (**rcx_15)(rcx_15)
                int32_t temp10_1 = *(rcx_15 + 0xc)
                *(rcx_15 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rcx_15 + 8))(rcx_15, 1)
        
        int64_t* rsi_6 = var_478:8.q
        
        if (rsi_6 != 0)
            rsi_6[1].d -= 1
            
            if (rsi_6[1].d == 1)
                (**rsi_6)(rsi_6)
                int32_t temp12_1 = *(rsi_6 + 0xc)
                *(rsi_6 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rsi_6 + 8))(rsi_6, 1)
        
        void var_308
        sub_140596d80(&var_308)
        int64_t* var_310
        
        if (var_310 != 0)
            var_310[1].d -= 1
            
            if (var_310[1].d == 1)
                (**var_310)(var_310)
                int32_t temp13_1 = *(var_310 + 0xc)
                *(var_310 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*var_310 + 8))(var_310, 1)
        
        void var_450
        result = sub_140d94d20(&var_450)
    
    int64_t* var_480
    
    if (var_480 != 0)
        var_480[1].d -= 1
        
        if (var_480[1].d == 1)
            result = (**var_480)(var_480)
            int32_t temp1_1 = *(var_480 + 0xc)
            *(var_480 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*var_480 + 8))(var_480, 1)
    
    *(arg1 + 0x3fc) = 0

__security_check_cookie(var_38 ^ &var_508)
return result
