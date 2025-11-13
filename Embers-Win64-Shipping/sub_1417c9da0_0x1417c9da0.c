// 函数: sub_1417c9da0
// 地址: 0x1417c9da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* var_a0 = arg2
int64_t* var_b0 = nullptr
int32_t i_4 = 0
uint64_t result
int512_t zmm1
int512_t zmm2
result, zmm1, zmm2 = sub_1417c6830(arg1, &var_b0)
int32_t i_3 = i_4
int64_t* rdi = var_b0

if (i_3 s> 0)
    uint64_t i_2 = zx.q(i_3)
    int64_t* rbp = var_a0
    int64_t* r12_1 = rdi
    uint64_t var_60
    int64_t* var_68_1 = &var_60
    uint64_t i_5 = i_2
    uint64_t i
    
    do
        int32_t var_b8
        sub_140926e00(arg1, &var_b8, r12_1)
        int64_t rax_2 = sx.q(var_b8)
        void* const rcx_1
        
        if (rax_2.d == 0xffffffff)
            rcx_1 = nullptr
        else
            rcx_1 = *arg1 + rax_2 * 0x28
        
        int64_t* rsi_1 = rcx_1 + 0x10
        
        if (rcx_1 == 0)
            rsi_1 = nullptr
        
        void*** rax_4 = sub_1427cfbf0(data_143ef8520)
        class physx::PxCollection* rax_5 = PxCreateCollection()
        int32_t j = 0
        char var_c8
        
        if (rsi_1[1].d s> 0)
            int64_t* rbx_1 = nullptr
            
            do
                int64_t r9 = *rax_5
                (*(r9 + 8))(rax_5, *(rbx_1 + *rsi_1), 0, r9, var_c8)
                j += 1
                rbx_1 = &rbx_1[1]
            while (j s< rsi_1[1].d)
            
            i_2 = i_5
        
        sub_1427cbff0(rax_5, rax_4, 0, 0, var_c8)
        int32_t var_88_1 = 0
        void** const var_90 = &data_142fcaac8
        var_c8 = 0
        sub_1427ce0e0(&var_90, rax_5, rax_4, nullptr, zmm1, zmm2, var_c8)
        (*(*rax_5 + 0x70))(rax_5)
        (*rax_4)[7](rax_4)
        uint64_t rcx_8 = zx.q(var_88_1)
        int64_t* var_70 = r12_1
        *arg3 += rcx_8
        *arg4 += rsi_1[1].d
        int64_t rax_9 = sx.q(rsi_1[1].d)
        var_60 = rcx_8
        int64_t var_58_1 = rax_9
        zmm1 = sub_1417c66b0(rbp, &var_a0, &var_70, nullptr)
        r12_1 = &r12_1[2]
        result = &data_142d40888
        i = i_2
        i_2 -= 1
        var_90 = &data_142d40888
        i_5 = i_2
    while (i != 1)
    i_3 = i_4
    rdi = var_b0

int64_t* rbx_2 = rdi

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_2
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rdi != 0)
    result = sub_140a74f90(rdi)

__security_check_cookie(rax_1 ^ &var_e8)
return result
