// 函数: sub_141ecaf50
// 地址: 0x141ecaf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t* rdx = arg2[1]
arg_10.b = 0
char* r8 = *rdx

if (&r8[1] u> rdx[1])
    (*(*arg2 + 0x150))(arg2, &arg_10, 1)
else
    arg_10.b = *r8
    *rdx += 1

if (arg_10.b u> 0)
    *(arg2 + 0x29) |= 1
    return 1

bool cond:0 = (arg2[5].b & 2) == 0
uint64_t var_1c8 = 0
int32_t var_1c0 = 0
int64_t var_1a8 = 0
int32_t arg_18 = 0
int64_t var_1e8
__builtin_memset(&var_1e8, 0, 0x1c)
uint64_t var_1d8
int32_t var_1d0_1
int64_t var_1a0
void** var_188
void** var_d8
int32_t arg_20

if (not(cond:0))
    void* rax_3 = *arg1
    
    if (rax_3 != 0)
        int64_t* r15_1 = *(rax_3 + 0x10)
        int64_t var_1b8
        int32_t rsi_1
        int64_t* rdi_1
        
        if (r15_1 == 0)
            var_1b8 = 0
            rdi_1 = &var_1b8
            int64_t var_1b0_1 = 0
            rsi_1 = 2
        label_141ecb082:
            var_1c8 = *rdi_1
            *rdi_1 = 0
            var_1c0 = rdi_1[1].d
            var_1c0 = *(rdi_1 + 0xc)
            rdi_1[1] = 0
        else
            int64_t* rax_4
            rax_4, arg3 = sub_140d21e10(r15_1, &var_1a0, 0)
            rdi_1 = rax_4
            rsi_1 = 1
            
            if (&var_1c8 != rdi_1)
                uint64_t rcx_2 = var_1c8
                
                if (rcx_2 != 0)
                    arg3 = sub_140a74f90(rcx_2)
                
                goto label_141ecb082
        
        if ((rsi_1.b & 2) != 0)
            int64_t rcx_3 = var_1b8
            rsi_1 &= 0xfffffffd
            
            if (rcx_3 != 0)
                arg3 = sub_140a74f90(rcx_3)
        
        if ((rsi_1.b & 1) != 0)
            int64_t rcx_4 = var_1a0
            rsi_1 &= 0xfffffffe
            
            if (rcx_4 != 0)
                arg3 = sub_140a74f90(rcx_4)
        
        void* rcx_5 = *(*arg1 + 0x20)
        int64_t rcx_6
        int32_t rdi_2
        int64_t* r14_1
        
        if (rcx_5 == 0)
            rcx_6 = 0
            int64_t var_1b0_2 = 0
            var_1b8 = 0
            r14_1 = &var_1b8
            rdi_2 = 8
        else
            int64_t* rax_9
            rax_9, arg3 = sub_140d21e10(rcx_5, &var_1a0, 0)
            rcx_6 = var_1b8
            r14_1 = rax_9
            rdi_2 = 4
        
        int32_t rdi_3 = rdi_2 | rsi_1
        
        if (&var_1d8 != r14_1)
            uint64_t rcx_7 = var_1d8
            
            if (rcx_7 != 0)
                arg3 = sub_140a74f90(rcx_7)
            
            var_1d8 = *r14_1
            *r14_1 = 0
            var_1d0_1 = r14_1[1].d
            var_1d0_1 = *(r14_1 + 0xc)
            r14_1[1] = 0
            rcx_6 = var_1b8
        
        if ((rdi_3.b & 8) != 0)
            rdi_3 &= 0xfffffff7
            
            if (rcx_6 != 0)
                arg3 = sub_140a74f90(rcx_6)
        
        if ((rdi_3.b & 4) != 0)
            int64_t rcx_8 = var_1a0
            
            if (rcx_8 != 0)
                arg3 = sub_140a74f90(rcx_8)
        
        void* rcx_9 = *arg1
        var_1a8 = *(rcx_9 + 0x18)
        arg_18 = *(rcx_9 + 8) & 0x2d4003b
        
        if (r15_1 != 0)
            arg_20.q = 0
            memset(&var_188, 0, 0x90)
            sub_140b4c2a0(&var_188)
            int64_t var_f8_1 = 0
            var_188 = &data_142d6ad48
            int64_t* var_f0_1 = &var_1e8
            int64_t var_e8_1 = 0
            sub_140b552b0(&var_188, 1)
            var_188[0x1b](&var_188, 0)
            sub_140b4c130(&var_d8, &var_188)
            int64_t r8_1 = *arg1
            var_d8 = &data_14325c860
            char var_40_1 = 0
            sub_140776930(r15_1, &var_d8, r8_1, r15_1, 0, 0)
            sub_140b4cb40(&var_d8)
            arg3 = sub_140b4cb40(&var_188)

int512_t zmm1_1 = sub_140a1d9d0(arg2, &var_1d8, sub_140a1d9d0(arg2, &var_1c8, arg3))
(*(*arg2 + 0x140))(arg2, &var_1a8)
int64_t* rcx_21 = arg2[1]
int32_t* rdx_10 = *rcx_21

if (&rdx_10[1] u> rcx_21[1])
    int32_t* rdx_11 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_11, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_11, 4)
else
    arg_18 = *rdx_10
    *rcx_21 += 4

int64_t var_1e0
(*(*arg2 + 8))(arg2, sx.q(var_1e0.d), sx.q(var_1e0:4.d))
int32_t rax_22 = var_1e0.d
int64_t* rcx_24 = arg2[1]

if ((arg2[5].b & 1) != 0)
    rax_22 = 0

arg_20 = rax_22
int32_t* rdx_13 = *rcx_24

if (&rdx_13[1] u> rcx_24[1])
    int32_t* rdx_14 = &arg_20
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_14, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_14, 4)
else
    arg_20 = *rdx_13
    *rcx_24 += 4

int32_t rcx_28 = arg_20
uint64_t result

if (rcx_28 != 0)
    result = zx.q(*(arg2 + 0x29))
    
    if ((result.b & 1) != 0 || rcx_28 s<= 0 || ((*(arg2 + 0x2b) & 8) != 0 && rcx_28 s> 0x1000000))
        result.b |= 1
        *(arg2 + 0x29) = result.b
    else
        var_1e0.d = rcx_28
        
        if ((arg2[5].b & 1) != 0)
            sub_1405da9e0(&var_1e8, rcx_28, var_1e0:4.d)
            rcx_28 = var_1e0.d
        
        (*(*arg2 + 0x150))(arg2, var_1e8, sx.q(rcx_28))
    
    goto label_141ecb398

if ((arg2[5].b & 1) != 0)
    var_1e0.d = 0
label_141ecb398:
    
    if ((arg2[5].b & 1) != 0)
        int16_t* rdi_4 = &data_142d40450
        int16_t* rbx_1 = &data_142d40450
        *arg1 = 0
        
        if (var_1c0 != 0)
            rbx_1 = var_1c8
        
        result = sub_140d2f6f0(sub_140bdf2e0(), 0, rbx_1, 0, 0, 0, 1, 0)
        int64_t* result_1 = result
        
        if (result != 0)
            int16_t* rbx_2 = &data_142d40450
            
            if (var_1d0_1 != 0)
                rbx_2 = var_1d8
            
            result = sub_140d2ee50(sub_140d41340(), nullptr, rbx_2, 0)
            
            if (result != 0)
                int16_t** rax_28 = sub_140b63b70(&var_1a8, &var_1a0)
                
                if (rax_28[1].d != 0)
                    rdi_4 = *rax_28
                
                int32_t r15_2 = arg_18
                uint64_t rbx_3 = *sub_140b58260(&arg_20, rdi_4, 1)
                uint32_t rcx_36
                rcx_36.b = (rbx_3 u>> 0x20).d == 0
                
                if ((rcx_36.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
                    sub_140d19010(result, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                void* rax_31 = sub_140d2dfc0(result_1, result, rbx_3, r15_2, 0, 0, 0, 0, 0)
                int64_t rcx_39 = var_1a0
                *arg1 = rax_31
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                memset(&var_188, 0, 0x90)
                sub_140b4c2a0(&var_188)
                int64_t var_f8_2 = 0
                var_188 = &data_142d6b230
                int64_t* var_f0_2 = &var_1e8
                int64_t var_e8_2 = 0x7fffffffffffffff
                sub_140b55290(&var_188, 1)
                var_188[0x1b](&var_188, 0)
                sub_140b4c130(&var_d8, &var_188)
                int64_t r8_8 = *arg1
                var_d8 = &data_14325c860
                char var_40_2 = 0
                sub_140776930(result_1, &var_d8, r8_8, result_1, 0, 0)
                sub_140b4cb40(&var_d8)
                sub_140b4cb40(&var_188)

int64_t rcx_48 = var_1e8

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

uint64_t rcx_49 = var_1d8

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

uint64_t rcx_50 = var_1c8

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

result.b = 1
return result
