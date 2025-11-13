// 函数: sub_140ca4120
// 地址: 0x140ca4120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)

if (sub_140b4e7c0(arg2, &data_1439a9418) s< 0x1d)
    (*(*arg2 + 0x130))(arg2, &arg1[5])

int64_t r14 = arg1[8]
(*(*arg2 + 0x130))(arg2, &arg1[8])

if ((arg2[5].b & 1) != 0)
    sub_140ca20f0(&arg1[6])
else if (r14 != 0 && r14 != arg1[8])
    sub_140ca20f0(&arg1[6])

(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93e8)
int32_t rax_6
int512_t zmm1
rax_6, zmm1 = sub_140b4e7c0(arg2, &data_1439a9418)
uint64_t var_1b8
int32_t var_1b0

if (rax_6 s>= 0x1d)
    bool cond:0_1 = (arg2[5].b & 1) == 0
    uint64_t rdx_3 = 0
    int32_t rcx_9 = 0
    var_1b8 = 0
    var_1b0 = 0
    int32_t r8_1 = 0
    int32_t var_1ac_1 = 0
    uint64_t r9_1
    
    if (cond:0_1)
        for (void* i = arg1[9]; i != 0; i = *(i + 0x28))
            int64_t r14_1 = sx.q(rcx_9)
            rcx_9 = (r14_1 + 1).d
            
            if (rcx_9 s> r8_1)
                sub_1405a4d70(&var_1b8)
                r8_1 = var_1ac_1
                rdx_3 = var_1b8
            
            *(rdx_3 + (r14_1 << 3)) = i
        
        sub_1408dc5a0(arg2, &var_1b8, zmm1)
        r9_1 = var_1b8
    else
        sub_1408dc5a0(arg2, &var_1b8, zmm1)
        r9_1 = var_1b8
        
        if (var_1b0 == 0)
            arg1[9] = 0
        else
            if (var_1b0 s> 1)
                int32_t r8_2 = 1
                uint64_t rcx_11 = r9_1
                
                do
                    r8_2 += 1
                    *(*rcx_11 + 0x28) = *(rcx_11 + 8)
                    rcx_11 += 8
                while (r8_2 s< var_1b0)
            
            arg1[9] = *r9_1
            *(*(r9_1 + (sx.q(var_1b0 - 1) << 3)) + 0x28) = 0
    
    if (r9_1 != 0)
        sub_140a74f90(r9_1)
else
    (*(*arg2 + 0x130))(arg2, &arg1[9])

int32_t rax_12
int512_t zmm1_1
rax_12, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a93e8)

if (rax_12 s>= 4)
    zmm1_1 = sub_140ca69c0(arg1, arg2, zmm1_1)

char rcx_19 = arg2[5].b
uint64_t result

if ((rcx_19 & 1) == 0)
    result = zx.q(arg1[0xd].d)
    uint64_t result_3 = -1
    int32_t result_1 = result.d
    int32_t arg_8
    
    if ((rcx_19 & 2) != 0)
        int64_t* rcx_23 = arg2[1]
        int32_t* rdx_13 = *rcx_23
        
        if (&rdx_13[1] u> rcx_23[1])
            int32_t* rdx_14 = &result_1
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_14, zmm1_1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_14, 4)
        else
            result_1 = *rdx_13
            *rcx_23 += 4
        
        int64_t rax_19 = *arg2
        arg_8 = 0
        result = (*(rax_19 + 0x20))(arg2)
        int64_t* rdx_15 = arg2[1]
        result_3 = result
        int32_t* r8_6 = *rdx_15
        
        if (&r8_6[1] u> rdx_15[1])
            int32_t* rdx_16 = &arg_8
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                result = sub_140b54070(arg2, rdx_16, zmm1_1)
            else
                result = (*(*arg2 + 0x150))(arg2, rdx_16, 4)
        else
            arg_8 = *r8_6
            *rdx_15 += 4
    
    if (data_143de542d == 0)
        int64_t rax_21 = *arg2
        arg_8 = 0
        int32_t rax_22 = (*(rax_21 + 0x20))(arg2)
        int64_t rax_23
        
        if (arg2[5].b s< 0)
            int64_t rdx_17 = *arg2
            rax_23 = (*(rdx_17 + 0x18))(arg2, rdx_17)
        
        int64_t arg_18
        int512_t zmm1_2
        void** var_1a8
        int64_t var_110
        
        if (arg2[5].b s>= 0 || rax_23 == 0)
            sub_140b4c130(&var_1a8, arg2)
            var_110 = 0
            var_1a8 = &data_142e89240
            int32_t* var_100_2 = &arg_8
            int64_t var_108_2 = 0
            int64_t* var_f8_2 = arg1
            
            while (arg_8 s< result_1)
                (*(*arg1 + 0x2b8))(arg1, &arg_8, &var_1a8)
            
            sub_140846450(&var_110)
            zmm1_2 = sub_140b4cb40(&var_1a8)
        else
            int64_t rdx_18 = *arg2
            void* rax_24 = (*(rdx_18 + 0x18))(arg2, rdx_18)
            void* const r14_2 = rax_24
            
            if (rax_24 == 0 || *(rax_24 + 0x98) != 2)
                r14_2 = nullptr
            
            int64_t r12_1 = *(r14_2 + 0x290)
            var_1b8 = 0
            uint8_t rdi_1 = arg2[5].b u>> 7
            var_1b0.q = 0
            arg_18 = 0
            void** var_e8
            memset(&var_e8, 0, 0x90)
            sub_140b4c2a0(&var_e8)
            int64_t var_58_1 = 0
            var_e8 = &data_142d6ad48
            int64_t* var_50_1 = &var_1b8
            int64_t var_48_1 = arg_18
            sub_140b552b0(&var_e8, 1)
            var_e8[0x1b](&var_e8, zx.q(rdi_1))
            *(r14_2 + 0x290) = &var_e8
            sub_140b4c130(&var_1a8, arg2)
            int64_t* var_f8_1 = arg1
            var_1a8 = &data_142e89240
            var_110 = 0
            int64_t var_108_1 = 0
            int32_t* var_100_1 = &arg_8
            
            while (arg_8 s< result_1)
                (*(*arg1 + 0x2b8))(arg1, &arg_8, &var_1a8)
            
            sub_140846450(&var_110)
            sub_140b4cb40(&var_1a8)
            *(r14_2 + 0x290) = r12_1
            (*(*arg2 + 0x150))(arg2, var_1b8, sx.q(var_1b0))
            sub_140cd0ab0(r14_2, &var_1b8)
            zmm1_2 = sub_140b4cb40(&var_e8)
            uint64_t rcx_43 = var_1b8
            
            if (rcx_43 != 0)
                zmm1_2 = sub_140a74f90(rcx_43)
        uint64_t r9_3 = zx.q(arg_8)
        result = zx.q(result_1)
        
        if (r9_3.d != result.d)
            int32_t var_1c8_1 = result.d
            zmm1_2 = sub_140af98a0("Unknown", 0x78d, 
                Script serialization mismatch: Got %i, expected %i", r9_3)
            result = sub_140afbb40()
        
        if ((arg2[5].b & 2) != 0)
            int64_t rax_35 = (*(*arg2 + 0x20))(arg2)
            int64_t r8_10 = *arg2
            (*(r8_10 + 0x178))(arg2, result_3, r8_10)
            int64_t* rdx_28 = arg2[1]
            arg_18.d = rax_35.d - rax_22
            int32_t* r8_11 = *rdx_28
            
            if (&r8_11[1] u> rdx_28[1])
                int32_t* rdx_29 = &arg_18
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_29, zmm1_2)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_29, 4)
            else
                arg_18.d = *r8_11
                *rdx_28 += 4
            
            return (*(*arg2 + 0x178))(arg2, rax_35)
else
    sub_140d15bd0(&var_1b8, arg1, arg2, zmm1_1)
    sub_140d24d80(&var_1b8, arg1, arg2, 1)
    void* rax_13 = sub_140bdf2e0()
    void* rdx_11 = arg1[2]
    result = sx.q(*(rax_13 + 0x38))
    
    if (result.d s> *(rdx_11 + 0x38))
    label_140ca435b:
        
        if ((arg2[6].d & 0x1000) == 0)
            void* r8_5
            r8_5.b = 1
            return (*(*arg1 + 0x278))(arg1, arg2, r8_5)
    else
        uint64_t result_2 = result
        result = *(rdx_11 + 0x30)
        
        if (*(result + (result_2 << 3)) != rax_13 + 0x30)
            goto label_140ca435b

return result
