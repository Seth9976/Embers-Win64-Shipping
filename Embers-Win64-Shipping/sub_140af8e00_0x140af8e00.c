// 函数: sub_140af8e00
// 地址: 0x140af8e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t r14 = 0
int32_t var_1c8 = 0
char rsi = 0
int64_t var_1d8
int64_t* rax_2 = sub_140af3690(&var_1d8, arg2, arg3, arg6)

if (arg1 != rax_2)
    int64_t rcx_2 = *arg1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *arg1 = *rax_2
    *rax_2 = 0
    arg1[1].d = rax_2[1].d
    *(arg1 + 0xc) = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_4 = var_1d8

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* const r15 = &data_142d40450
int16_t* rbx_1

if (arg1[1].d == 0)
    rbx_1 = &data_142d40450
else
    rbx_1 = *arg1

char rax_5
int512_t zmm2
rax_5, zmm2 = sub_140b47890(&data_1439a90f0, rbx_1)

if (rax_5 != 0)
    int16_t* rbx_2
    
    if (arg1[1].d == 0)
        rbx_2 = &data_142d40450
    else
        rbx_2 = *arg1
    
    zmm2 = sub_140b43b30(&data_1439a90f0, rbx_2, arg2)

int16_t* rbx_3

if (arg1[1].d == 0)
    rbx_3 = &data_142d40450
else
    rbx_3 = *arg1

uint64_t result = sub_140b3a4e0(&data_1439a90f0, rbx_3)

if (result == 0)
label_140af8f39:
    
    if (arg4 != 0)
        r14 = var_1d8
        rbx_3.b = 0
    else
        int16_t* rsi_1
        
        if (arg1[1].d == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *arg1
        
        var_1d8 = 0
        int64_t var_1d0_1 = 0
        int32_t rdx_4 = 0
        int32_t rcx_6 = 0
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            int64_t rbx_4 = -1
            
            do
                rbx_4 += 1
            while (rsi_1[rbx_4] != 0)
            
            if (rbx_4.d + 1 s> 0)
                sub_1405947f0(&var_1d8, rbx_4.d + 1)
                rcx_6 = var_1d0_1:4.d
                rdx_4 = var_1d0_1.d
                r14 = var_1d8
            
            int32_t rax_6 = rdx_4 + rbx_4.d + 1
            var_1d0_1.d = rax_6
            
            if (rax_6 s> rcx_6)
                sub_140594770(&var_1d8)
                r14 = var_1d8
            
            UnDecorator::getReferenceType(r14, rsi_1, (rbx_4.d + 1) * 2)
        
        rbx_3 = data_143ddb400 + 8
        sub_140aeffb0(rbx_3, &var_1c8, &var_1d8)
        int64_t rax_7 = sx.q(var_1c8)
        int64_t rdx_9
        
        if (rax_7.d == 0xffffffff)
            rdx_9 = 0
        else
            rdx_9 = rax_7 * 0x158 + *rbx_3
        
        result = rdx_9 + 0x10
        rsi = 1
        
        if (rdx_9 == 0)
            result = 0
        
        if (result == 0)
            rbx_3.b = 0
        else
            rbx_3 = 1
    
    if ((rsi & 1) != 0 && r14 != 0)
        sub_140a74f90(r14)
    
    if (rbx_3.b == 0)
        int16_t* var_1b0
        sub_140b13890(&var_1b0)
        int16_t* var_1c0
        sub_140b24f00(&var_1c0)
        
        if (arg4 != 0)
            int64_t* rax_8 = sub_140b58260(&var_1c8, arg2, 1)
            void* rax_9
            rax_9, zmm2 = sub_140aefca0(data_143ddb400, *rax_8)
            
            if (rax_9 != 0)
                int32_t rcx_16 = *(rax_9 + 0xc0)
                
                if (rcx_16 != 0 && rcx_16 != 1)
                    sub_140597df0(&var_1b0, rax_9 + 0xb8)
                
                int32_t rax_10 = *(rax_9 + 0xd0)
                
                if (rax_10 != 0 && rax_10 != 1)
                    sub_140597df0(&var_1c0, rax_9 + 0xc8)
        
        void var_188
        int64_t* rax_11 = sub_140ae6a10(&var_188)
        int64_t* rax_12 = sub_140ae4b00(data_143ddb400 + 8, arg1, rax_11)
        sub_140ae7280(&var_188)
        int16_t* r9_1 = &data_142d40450
        int32_t var_1b8
        
        if (var_1b8 != 0)
            r9_1 = var_1c0
        
        int32_t var_1a8
        
        if (var_1a8 != 0)
            r15 = var_1b0
        
        int16_t* var_1e0_1 = arg6
        char result_1 = sub_140af8b90(rax_12, arg2, r15, r9_1, zmm2, 1, arg3, arg4, 1, arg5)
        int16_t* rcx_25 = var_1c0
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        int16_t* rcx_26 = var_1b0
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        result = zx.q(result_1)
    else
        result.b = 1
else if (*(result + 0x29) == 0)
    result.b = 0
else
    if (arg1[1].d != 0)
        *arg1
    
    if (sub_140b402f0().b != 0)
        goto label_140af8f39
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_228)
return result
