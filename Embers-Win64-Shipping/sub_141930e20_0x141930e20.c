// 函数: sub_141930e20
// 地址: 0x141930e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_2 = result
int64_t* rbx = *(arg2 + 0x88)
uint64_t result_1 = 0
int64_t* var_b0 = rbx

if (rbx == 0)
    goto label_141930ec2

result = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    result = zx.q(rbx[1].d)
    z_1 = false

if (z_1)
label_141930e94:
    rbx = nullptr
    var_b0 = nullptr
label_141930ec2:
    uint64_t r14_1 = zx.q(*(arg2 + 0x7c))
    uint64_t r15_1 = zx.q(*(arg2 + 0x78))
    
    if (r14_1 != 0)
        int32_t rax_1 = *(arg2 + 0x98)
        
        if (r14_1.d s> rax_1)
            *(arg2 + 0x98) = r14_1.d
            
            if (r14_1.d s> *(arg2 + 0x9c))
                sub_1405daba0(arg2 + 0x90)
        else if (r14_1.d s< rax_1 && r14_1.d != rax_1)
            *(arg2 + 0x98) = r14_1.d
            sub_1405dac10(arg2 + 0x90)
        
        int64_t rax_2 = *(arg2 + 0x90)
        *(arg2 + 0xa4) = 2
        int64_t* rcx_3 = *(arg1 + 0x140)
        int64_t rax_3 = (*(*rcx_3 + 0x10))(rcx_3, r15_1, r14_1, 3, 0, rax_2, result_1)
        void*** rax_4 = j_sub_140a82f30(0x18)
        
        if (rax_4 != 0)
            rax_4[1].d = 1
            *rax_4 = &data_142d42ea8
            *(rax_4 + 0xc) = 1
            rax_4[2] = rax_3
        
        void*** var_98 = rax_4
        int64_t var_a0_1 = 0
        sub_1405aeff0(&var_b0, &var_98)
        void*** rbx_3 = var_98
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_7 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*rbx_3)[1](rbx_3, 1)
        
        rbx = var_b0
        *(arg2 + 0x80) = rax_3
        int64_t* rcx_7 = *(arg2 + 0x88)
        
        if (rbx != rcx_7)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_7 = *(arg2 + 0x88)
                rbx = var_b0
            
            if (rcx_7 != 0)
                int32_t rax_10 = *(rcx_7 + 0xc)
                *(rcx_7 + 0xc) -= 1
                
                if (rax_10 == 1)
                    (*(*rcx_7 + 8))(rcx_7, 1)
                
                rbx = var_b0
            
            *(arg2 + 0x88) = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
            rbx = var_b0
        
        void*** rax_12 = sub_140a82f30(0x28, 8)
        rax_12[1] = arg2
        rax_12[2] = rax_3
        rax_12[3] = rbx
        rax_12[4] = arg1
        *rax_12 = &data_142ff86e8
        int64_t (* var_88)(int64_t* arg1, int64_t* arg2)
        int64_t (* rdx_4)(int64_t* arg1, int64_t* arg2) = var_88
        
        if (rax_12 != -8)
            rdx_4 = sub_141932080
        
        void*** var_78_1 = rax_12
        var_88 = rdx_4
        
        if (arg3 == 0)
            goto label_1419310a0
        
        result = (*(*arg3 + 0x1f8))(arg3, &var_88)
        void var_68
        
        if (result.b == 0)
            rax_12 = var_78_1
        label_1419310a0:
            int64_t* rcx_10 = &var_68
            
            if (rax_12 != 0)
                rcx_10 = rax_12
            
            int64_t var_90 = (zx.o(0)).q
            result = var_88((*(*rcx_10 + 8))(rcx_10), &var_90)
        
        if (var_88 != 0)
            void*** rcx_12 = &var_68
            
            if (var_78_1 != 0)
                rcx_12 = var_78_1
            
            result = (*rcx_12)[2](rcx_12)
else
    while (true)
        bool z_2
        
        if (result.d == rbx[1].d)
            rbx[1].d = (result + 1).d
            z_2 = true
        else
            result = zx.q(rbx[1].d)
            z_2 = false
        
        if (z_2)
            break
        
        result = 0
        bool z_3
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_3 = true
        else
            result = zx.q(rbx[1].d)
            z_3 = false
        
        if (z_3)
            goto label_141930e94
    
    rbx = var_b0
    
    if (rbx == 0)
        goto label_141930ec2
    
    result = *(arg2 + 0x80)
    result_1 = result
    
    if (result == 0)
        goto label_141930ec2

if (rbx != 0)
    result = zx.q(rbx[1].d)
    rbx[1].d -= 1
    
    if (result.d == 1)
        int64_t* rbx_4 = var_b0
        result = (**rbx_4)(rbx_4)
        int32_t rsi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_14 = var_b0
            result = (*(*rcx_14 + 8))(rcx_14, zx.q(rsi_1))

__security_check_cookie(result_2 ^ &var_e8)
return result
