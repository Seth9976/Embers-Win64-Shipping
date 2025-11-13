// 函数: sub_141e2e930
// 地址: 0x141e2e930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_141e459b0(arg1)
char rax_1
char rdx
rax_1, rdx = (*(*arg1 + 0x278))(arg1)

if (rax_1 != 0)
    void* rcx_1 = arg1[0x2b]
    
    if (rcx_1 != 0 && *(rcx_1 + 0x38) != arg1[7])
        arg1[0x2b] = 0

int128_t zmm7 = sub_141e46d60(arg1, rdx)
int32_t zmm6 = (zx.o(0)).d

if (arg1[0x15].d != 0 || arg1[0x14].d != 0)
    if (not(0f f!= arg1[0x12].d))
        arg1[0x12].d = 0x3d088889
    else if (arg1[7] != 0 && arg1[0x19].d != 0 && arg1[0x26] == 0)
        void* rcx_3 = arg1[4]
        int16_t* const rbp_1 = &data_142d40450
        int64_t var_68
        int64_t var_58
        int32_t rbx_1
        int16_t* const rsi_1
        
        if (rcx_3 == 0)
            int64_t* rax_4 = sub_140d21830(arg1, &var_68, 0, 0)
            rbx_1 = 8
            
            if (rax_4[1].d == 0)
                rsi_1 = &data_142d40450
            else
                rsi_1 = *rax_4
        else
            int64_t* rax_3 = sub_140d21830(rcx_3, &var_58, 0, 0)
            
            if (rax_3[1].d == 0)
                rsi_1 = &data_142d40450
                rbx_1 = 4
            else
                rsi_1 = *rax_3
                rbx_1 = 4
        
        arg_8.q = arg1[3]
        int16_t* var_78
        zmm6 = sub_140b63b70(&arg_8, &var_78)
        int16_t* const var_88_1 = rsi_1
        int32_t var_70
        
        if (var_70 != 0)
            rbp_1 = var_78
        
        sub_140af98a0("Unknown", 0x3f0, No animation compression exists for sequence %s (%s)", 
            rbp_1)
        int16_t* rcx_6 = var_78
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        if ((rbx_1.b & 8) != 0)
            int64_t rcx_7 = var_68
            rbx_1 &= 0xfffffff7
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
        
        if ((rbx_1.b & 4) != 0)
            int64_t rcx_8 = var_58
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        sub_140afbb40()

void* rax_6 = arg1[7]

if (rax_6 != 0)
    *(arg1 + 0x50) = *(rax_6 + 0x170)

int32_t rax_7 = arg1[0x19].d

if (rax_7 s> 0 && arg1[0x23].d s> 0)
    int32_t i = 0
    
    if (rax_7 s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rbx_3 = arg1[0x18] + r14_1
            rbx_3[1].d = 0
            
            if (*(rbx_3 + 0xc) != 0)
                sub_140638cc0(rbx_3, 0)
            
            rbx_3[3].d = 0
            
            if (*(rbx_3 + 0x1c) != 0)
                sub_1405a5410(&rbx_3[2], 0)
            
            rbx_3[5].d = 0
            
            if (*(rbx_3 + 0x2c) != 0)
                sub_140638cc0(&rbx_3[4], 0)
            
            i += 1
            r14_1 += 0x30
        while (i s< arg1[0x19].d)
    
    sub_14095c9f0(&arg1[0x18], 0)

int64_t* rsi_2 = arg1[0x10]
int64_t result = sx.q(arg1[0x11].d)
void* rbp_3 = result * 0xb8 + rsi_2

if (rsi_2 != rbp_3)
    int128_t var_48_1 = zmm7
    int64_t** rbx_4 = &rsi_2[0x11]
    
    do
        float zmm1_1
        
        if (zmm6 f== rbx_4[-0xb].d)
            result = zx.q(*(rbx_4 - 0x6f))
            
            if (result.b == 0)
                zmm1_1 = *(rbx_4 - 0x64)
            else
                uint32_t rcx_16 = zx.d(result.b)
                
                if (rcx_16 == 1)
                    zmm1_1 = *(rbx_4 - 0x6c) f+ *(rbx_4 - 0x64)
                else if (rcx_16 != 2)
                    zmm1_1 = *(rbx_4 - 0x64)
                else
                    zmm1_1 = rbx_4[-0xd].d f* *(rbx_4 - 0x64) f+ *(rbx_4 - 0x6c)
            
            if (not(zmm6 f>= arg1[0x12].d))
                goto label_141e2ec88
        else
            if (rbx_4[-0xe].b != 0)
                char rax_8 = *(rbx_4 - 0x6f)
                rbx_4[-0xe].b = 0
                
                if (rax_8 == 0)
                    zmm1_1 = *(rbx_4 - 0x64)
                else
                    uint32_t rcx_13 = zx.d(rax_8)
                    
                    if (rcx_13 == 1)
                        zmm1_1 = *(rbx_4 - 0x6c) f+ *(rbx_4 - 0x64)
                    else if (rcx_13 != 2)
                        zmm1_1 = *(rbx_4 - 0x64)
                    else
                        zmm1_1 = rbx_4[-0xd].d f* *(rbx_4 - 0x64) f+ *(rbx_4 - 0x6c)
                
                result, zmm6 = sub_141e2d2b0(rsi_2, zmm1_1)
            
            rbx_4[-0xc] = 0
            *(rbx_4 - 0x6c) = 0xbf800000
            rbx_4[-0xd].d = 0xbf800000
            *(rbx_4 - 0x74) = 0xffffffff
            
            if (not(zmm6 f>= arg1[0x12].d))
                zmm1_1 = rbx_4[-0xb].d
            label_141e2ec88:
                rbx_4[-0x10] = 0
                rbx_4[-0xc] = arg1
                *(rbx_4 - 0x74) = 0
                *(rbx_4 - 0x6c) = 0
                rbx_4[-0xd].d = arg1[0x12].d
                result = (*(*rsi_2 + 8))(rsi_2, zmm1_1, 0)
        
        zmm1_1 = rbx_4[-6].d
        
        if (not(zmm1_1 f== zmm6))
            result = zx.q(*(rbx_4 - 0x6f))
            int128_t zmm0_1
            
            if (result.b == 0)
                zmm0_1 = *(rbx_4 - 0x64)
            else
                uint32_t rcx_19 = zx.d(result.b)
                
                if (rcx_19 == 1)
                    zmm0_1.d = (*(rbx_4 - 0x6c)).d f+ *(rbx_4 - 0x64)
                else if (rcx_19 != 2)
                    zmm0_1 = *(rbx_4 - 0x64)
                else
                    zmm0_1.d = rbx_4[-0xd].d.d f* *(rbx_4 - 0x64)
                    zmm0_1.d = zmm0_1.d f+ *(rbx_4 - 0x6c)
            
            if (not(zmm6 f>= arg1[0x12].d))
                rbx_4[-4] = 0
                *rbx_4 = arg1
                *(rbx_4 - 0x14) = 0
                *(rbx_4 - 0xc) = 0
                rbx_4[-1].d = arg1[0x12].d
                result = rbx_4[-5][1](&rbx_4[-5], zmm1_1 f+ zmm0_1.d, 0)
        
        rsi_2 = &rsi_2[0x17]
        rbx_4 = &rbx_4[0x17]
    while (rsi_2 != rbp_3)

void* rsi_3 = arg1[7]

if (rsi_3 != 0)
    result = sx.q(arg1[0x1f].d)
    int64_t* i_1 = arg1[0x1e]
    
    for (void* rdi_1 = i_1 + result * 0xc; i_1 != rdi_1; i_1 += 0xc)
        result = sub_141e4ba50(rsi_3, &data_143f398c8, i_1)

return result
