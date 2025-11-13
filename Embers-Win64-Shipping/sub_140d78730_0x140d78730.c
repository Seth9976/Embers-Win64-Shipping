// 函数: sub_140d78730
// 地址: 0x140d78730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0
int32_t var_6c = 0xffffffff
__builtin_memset(arg1, 0, 0x21)
int64_t* rsi = arg2
int64_t* result = arg1
int16_t var_80 = 1
int64_t var_78 = 0
int32_t var_70 = 1
int32_t var_68 = 1
int64_t var_98 = 0
bool cond:0 = (*(*arg2 + 0x28))(rsi, &var_80) == 0
int32_t var_90 = 1
int32_t var_8c = 0xffffffff
int16_t var_a0 = 0xd
int64_t r14
r14.b = cond:0
int32_t var_88 = 1
int32_t rax_3 = (*(*rsi + 0x28))(rsi, &var_a0)
int64_t r8 = *rsi
int64_t var_58 = 0
int32_t var_50 = 1
int16_t var_60 = 0xf
int32_t var_4c = 0xffffffff
int32_t var_48 = 1
bool arg_18 = (*(r8 + 0x28))(rsi, &var_60, r8) == 0
STGMEDIUM param0

if (rax_3 == 0 && (*(*rsi + 0x18))(rsi, &var_a0, &param0) == 0)
    int16_t* rax_7 = GlobalLock(param0..hBitmap)
    result[4].b |= 1
    
    if (*result != rax_7)
        int32_t rbx_2
        
        if (rax_7 == 0 || *rax_7 == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rax_7[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        int32_t rdx_4 = 0
        result[1].d = 0
        
        if (*(result + 0xc) != rbx_2)
            sub_1405947f0(result, rbx_2)
            rdx_4 = result[1].d
        
        int32_t rax_8 = rdx_4 + rbx_2
        result[1].d = rax_8
        
        if (rax_8 s> *(result + 0xc))
            sub_140594770(result)
        
        if (rbx_2 != 0)
            memcpy(*result, rax_7, rbx_2 * 2)
    
    GlobalUnlock(param0..hBitmap)
    ReleaseStgMedium(&param0)

int64_t var_c8
int64_t var_c0

if (r14.b != 0 && (*(*rsi + 0x18))(rsi, &var_80, &param0) == 0)
    char* rax_11 = GlobalLock(param0..hBitmap)
    result[4].b |= 1
    int64_t rdi_2 = 0
    var_c8 = 0
    var_c0 = 0
    int32_t rsi_1 = 0
    
    if (rax_11 != 0 && *rax_11 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (rax_11[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_c8, rbx_3.d + 1)
            r13 = var_c0:4.d
            rsi_1 = var_c0.d
            rdi_2 = var_c8
        
        rsi_1 += rbx_3.d + 1
        var_c0.d = rsi_1
        
        if (rsi_1 s> r13)
            sub_140594770(&var_c8)
            r13 = var_c0:4.d
            rsi_1 = var_c0.d
            rdi_2 = var_c8
        
        sub_1405a7220(rdi_2, rbx_3.d + 1, rax_11, rbx_3.d + 1, 0x3f)
    
    if (result != &var_c8)
        int64_t rcx_15 = *result
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        *result = rdi_2
        result[1].d = rsi_1
        *(result + 0xc) = r13
    else if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    GlobalUnlock(param0..hBitmap)
    ReleaseStgMedium(&param0)
    rsi = arg2

if (arg_18 != 0 && (*(*rsi + 0x18))(rsi, &var_60, &param0) == 0)
    result[4].b |= 2
    int32_t* rax_14 = GlobalLock(param0..hBitmap)
    void* rdi_4 = zx.q(*rax_14) + rax_14
    
    if (rax_14[4] == 0)
        char i = *rdi_4
        
        if (i != 0)
            do
                var_c8 = 0
                int32_t rcx_29 = 0
                var_c0:4.d = 0
                int64_t r14_3 = 0
                var_c0.d = 0
                int32_t rsi_3 = 0
                
                if (i != 0)
                    int64_t rbx_10 = -1
                    
                    do
                        rbx_10 += 1
                    while (*(rdi_4 + rbx_10) != 0)
                    
                    if (rbx_10.d + 1 s> 0)
                        sub_1405947f0(&var_c8, rbx_10.d + 1)
                        rcx_29 = var_c0:4.d
                        rsi_3 = var_c0.d
                        r14_3 = var_c8
                    
                    rsi_3 += rbx_10.d + 1
                    var_c0.d = rsi_3
                    
                    if (rsi_3 s> rcx_29)
                        sub_140594770(&var_c8)
                        rsi_3 = var_c0.d
                        r14_3 = var_c8
                    
                    sub_1405a7220(r14_3, rbx_10.d + 1, rdi_4, rbx_10.d + 1, 0x3f)
                
                int64_t rbx_12 = sx.q(arg1[3].d)
                int32_t rax_17 = (rbx_12 + 1).d
                arg1[3].d = rax_17
                
                if (rax_17 s> *(arg1 + 0x1c))
                    sub_1405a4f90(&arg1[2])
                
                int64_t* rbx_14 = (rbx_12 << 4) + arg1[2]
                *rbx_14 = 0
                rbx_14[1].d = rsi_3
                
                if (rsi_3 != 0)
                    sub_1405a4c70(rbx_14, rsi_3, 0)
                    memcpy(*rbx_14, r14_3, rsi_3 * 2)
                else
                    *(rbx_14 + 0xc) = 0
                    rsi_3 = 1
                
                rdi_4 += sx.q(rsi_3)
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
                
                i = *rdi_4
            while (i != 0)
            
            result = arg1
    else
        for (int16_t i_1 = *rdi_4; i_1 != 0; i_1 = *rdi_4)
            var_c8 = 0
            int32_t rcx_21 = 0
            var_c0:4.d = 0
            int64_t r14_2 = 0
            var_c0.d = 0
            int32_t rsi_2 = 0
            
            if (i_1 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (*(rdi_4 + (rbx_5 << 1)) != 0)
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&var_c8, rbx_5.d + 1)
                    rcx_21 = var_c0:4.d
                    rsi_2 = var_c0.d
                    r14_2 = var_c8
                
                rsi_2 += rbx_5.d + 1
                var_c0.d = rsi_2
                
                if (rsi_2 s> rcx_21)
                    sub_140594770(&var_c8)
                    rsi_2 = var_c0.d
                    r14_2 = var_c8
                
                UnDecorator::getReferenceType(r14_2, rdi_4, (rbx_5.d + 1) * 2)
            
            int64_t rbx_7 = sx.q(arg1[3].d)
            int32_t rax_15 = (rbx_7 + 1).d
            arg1[3].d = rax_15
            
            if (rax_15 s> *(arg1 + 0x1c))
                sub_1405a4f90(&arg1[2])
            
            int64_t* rbx_9 = (rbx_7 << 4) + arg1[2]
            *rbx_9 = 0
            rbx_9[1].d = rsi_2
            
            if (rsi_2 != 0)
                sub_1405a4c70(rbx_9, rsi_2, 0)
                memcpy(*rbx_9, r14_2, rsi_2 * 2)
            else
                *(rbx_9 + 0xc) = 0
                rsi_2 = 1
            
            rdi_4 += sx.q(rsi_2) << 1
            
            if (r14_2 != 0)
                sub_140a74f90(r14_2)
    
    GlobalUnlock(param0..hBitmap)
    ReleaseStgMedium(&param0)

return result
