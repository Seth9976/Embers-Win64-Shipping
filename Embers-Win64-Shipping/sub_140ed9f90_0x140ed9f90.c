// 函数: sub_140ed9f90
// 地址: 0x140ed9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* var_f0 = arg3
int64_t* rdi = *(arg1 + 0xa0)

if (rdi != 0)
    int32_t rax_2 = rdi[1].d
    
    if (rax_2 == 0)
        rdi = nullptr
    else
        rdi[1].d = rax_2 + 1

int64_t r12 = 0

if (rdi != 0)
    r12 = *(arg1 + 0x98)

int64_t* rbx = arg2[1]

if (rbx != 0)
    int32_t rax_4 = rbx[1].d
    
    if (rax_4 != 0)
        rbx[1].d = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rbx = nullptr

int64_t r15 = 0

if (rbx != 0)
    r15 = *arg2
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int32_t result

if (r12 == r15)
    result = arg2[2].d

if (r12 != r15 || *(arg1 + 0xa8) != result)
    int64_t* rcx_4 = arg2[1]
    int64_t var_128 = *arg2
    
    if (rcx_4 != 0)
        *(rcx_4 + 0xc) += 1
    
    if (&var_128 != arg1 + 0x98)
        var_128.o = *(arg1 + 0x98)
        *(arg1 + 0x98) = var_128.o
    
    if (rcx_4 != 0)
        int32_t temp4_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rcx_4 + 8))(rcx_4, 1)
    
    *(arg1 + 0xa8) = arg2[2].d
    int64_t* r15_1 = nullptr
    int64_t* rsi_1 = arg2[1]
    
    if (rsi_1 != 0)
        int32_t rax_12 = rsi_1[1].d
        
        if (rax_12 != 0)
            rsi_1[1].d = rax_12 + 1
            rax_12.b = 1
        
        if (rax_12.b == 0)
            rsi_1 = nullptr
        
        if (rsi_1 != 0)
            r15_1 = *arg2
    
    void var_d8
    sub_140d91ed0(&var_d8)
    int128_t var_118
    sub_140d986d0(&var_d8, &var_118, zx.o(0).q, 0.100000001f, 2)
    void* rcx_23
    int64_t* rdx_7
    int64_t var_100
    
    if (r15_1 == 0)
        void* rdi_2 = *(arg1 + 0x20)
        int128_t* rax_21 = sub_140e151a0(rdi_2, &var_118)
        sub_140e1c720(rdi_2, &var_d8, sub_140e15660(rdi_2), rax_21)
        int64_t* rcx_27 = *(arg1 + 0x20)
        int128_t zmm0_6 = data_14399f5c0
        char var_108_2 = 1
        var_100 = 0
        int32_t var_f8_2 = 0
        var_118 = zmm0_6
        sub_140e92500(rcx_27, &rcx_27[0x65], &var_118, 2)
        sub_140745b20(&var_100)
        rcx_23 = *(arg1 + 0x40)
        rdx_7 = &var_118
        var_118 = zx.o(0)
    else
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        var_118.q = r15_1
        var_118:8.q = rsi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        float var_78
        sub_140da0290(var_f0, &var_78, &var_118)
        int64_t* rbx_1 = var_118:8.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp11_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp13_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        var_118:0xc.q = 0
        float var_70
        var_118:8.d = var_78 * var_70
        float var_74
        float var_104_1 = var_74 * var_70
        int32_t var_6c
        var_118.d = var_6c
        float var_68
        var_118:4.d = var_68
        sub_140dbe170(&var_118, &var_f0)
        int128_t zmm2_2 = var_f0.d
        float zmm3_1 = var_f0:4.d
        int32_t rcx_13 = arg2[2].d
        int64_t* var_120_1
        float var_e8
        var_120_1.d = var_e8
        float zmm0_2 = var_e8 f- zmm2_2.d
        float var_e4
        var_120_1:4.d = var_e4
        float zmm1_1 = var_e4 - zmm3_1
        var_128.d = zmm2_2.d
        var_128:4.d = zmm3_1
        
        if (rcx_13 == 0)
            var_120_1.d = zmm0_2 * 0.5f f+ zmm2_2.d
        else if (rcx_13 == 1)
            var_120_1:4.d = zmm1_1 * 0.5f + zmm3_1
        else if (rcx_13 == 2)
            var_128.d = zmm0_2 * 0.5f f+ zmm2_2.d
        else if (rcx_13 == 3)
            var_128:4.d = zmm1_1 * 0.5f + zmm3_1
        
        int128_t zmm0_3 = sub_140e15660(*(arg1 + 0x20))
        sub_140e1c720(*(arg1 + 0x20), &var_d8, zmm0_3, &var_128)
        int64_t* rbx_2 = data_143e243c8
        int128_t* rax_18 =
            (*(*rbx_2 + 0x30))(rbx_2, *sub_140b58260(&var_f0, Docking.Cross.PreviewWindowTint", 1), 
            0, &data_1439ae6b8)
        int64_t* rcx_20 = *(arg1 + 0x20)
        char var_108_1 = 1
        var_100 = 0
        int32_t var_f8_1 = 0
        var_118 = *rax_18
        sub_140e92500(rcx_20, &rcx_20[0x65], &var_118, 2)
        sub_140745b20(&var_100)
        void* rbx_3 = *(arg1 + 0x40)
        rdx_7 = (*(*r15_1 + 0x258))(r15_1, &var_118)
        rcx_23 = rbx_3
    sub_140f156a0(rcx_23, rdx_7)
    int64_t* rbx_5 = var_118:8.q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp7_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    result = sub_140d952d0(&var_d8)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            result = (**rsi_1)(rsi_1)
            int32_t temp9_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*rsi_1 + 8))(rsi_1, 1)

__security_check_cookie(rax_1 ^ &var_158)
return result
