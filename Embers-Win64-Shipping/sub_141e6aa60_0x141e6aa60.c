// 函数: sub_141e6aa60
// 地址: 0x141e6aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_58)
int64_t* arg_8

if (arg1[0x85] == 0)
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"AssetRegistry", 1)
    j_sub_140b3db50()
    int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rdx_2 = *rax_2
    arg1[0x85] = (*(rdx_2 + 0x48))(rax_2, rdx_2)

void* rbx_2 = arg1[0x86]

if (rbx_2 == 0)
    int64_t* rax_4 = sub_14246dc80()
    rbx_2 = rax_4[0x23]
    
    if (rbx_2 == 0)
        int64_t rdx_3 = *rax_4
        (*(rdx_3 + 0x390))(rax_4, rdx_3)
        rbx_2 = rax_4[0x23]
    
    arg1[0x86] = rbx_2

(*(*arg1 + 0x270))(arg1)
int64_t* r12 = *(rbx_2 + 0x38)
void* rax_7 = sx.q(*(rbx_2 + 0x40)) * 0x88
arg_8 = r12
void* rax_8 = rax_7 + r12

if (r12 != rax_8)
    void* r15_1 = &r12[2]
    
    do
        int64_t var_e8 = *r12
        int64_t var_e0_1 = *(r15_1 - 8)
        int32_t var_d8_1 = *r15_1
        int64_t var_d0_1 = *(r15_1 + 8)
        uint64_t var_c8 = 0
        int64_t var_c0_1 = 0
        sub_140597df0(&var_c8, r15_1 + 0x10)
        int64_t rax_13 = *(r15_1 + 0x20)
        int64_t* rdi_2 = *(r15_1 + 0x30)
        char rax_14 = *(r15_1 + 0x28)
        char rax_15 = *(r15_1 + 0x29)
        uint64_t var_a8 = 0
        int32_t i_7 = *(r15_1 + 0x38)
        int32_t i_14 = i_7
        
        if (i_7 != 0)
            sub_1405a4be0(&var_a8, i_7, 0)
            uint64_t rbx_3 = var_a8
            int32_t i
            
            do
                sub_140596d10(rbx_3, rdi_2)
                rbx_3 += 0x10
                rdi_2 = &rdi_2[2]
                i = i_7
                i_7 -= 1
            while (i != 1)
        else
            int32_t i_15 = i_7
        
        int32_t i_8 = *(r15_1 + 0x48)
        int64_t* rbx_4 = *(r15_1 + 0x40)
        int64_t* var_98 = nullptr
        int32_t i_16 = i_8
        
        if (i_8 != 0)
            sub_140808f70(&var_98, i_8, 0)
            int64_t* rdi_3 = var_98
            int32_t i_1
            
            do
                *rdi_3 = *rbx_4
                sub_140596d10(&rdi_3[1], &rbx_4[1])
                rdi_3 = &rdi_3[3]
                rbx_4 = &rbx_4[3]
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
        else
            int32_t var_8c_1 = 0
        
        int32_t i_13 = *(r15_1 + 0x68)
        int32_t rax_17 = *(r15_1 + 0x58)
        void* rdi_4 = *(r15_1 + 0x60)
        int64_t var_88 = *(r15_1 + 0x50)
        int32_t var_80_1 = rax_17
        uint64_t var_78 = 0
        int32_t i_17 = i_13
        
        if (i_13 != 0)
            sub_1405a4be0(&var_78, i_13, 0)
            uint64_t rbx_5 = var_78
            int32_t i_2
            
            do
                *rbx_5 = 0
                int32_t rsi_1 = *(rdi_4 + 8)
                int64_t r12_1 = *rdi_4
                *(rbx_5 + 8) = rsi_1
                
                if (rsi_1 != 0)
                    sub_1405a4c70(rbx_5, rsi_1, 0)
                    memcpy(*rbx_5, r12_1, rsi_1 * 2)
                else
                    *(rbx_5 + 0xc) = 0
                
                rbx_5 += 0x10
                rdi_4 += 0x10
                i_2 = i_13
                i_13 -= 1
            while (i_2 != 1)
            r12 = arg_8
        else
            int32_t var_6c_1 = 0
        
        char var_68_1 = *(r15_1 + 0x70)
        int32_t var_64_1 = *(r15_1 + 0x74)
        uint64_t rbx_7
        
        if ((*(*arg1 + 0x450))(arg1, &var_e8) != 0)
            (*(*arg1 + 0x260))(arg1, var_e8, &var_78, rax_13, rax_14, rax_15, 0)
            (*(*arg1 + 0x388))(arg1, var_e8, &var_88)
            int32_t i_11 = i_17
            uint64_t rbx_8 = var_78
            
            if (i_11 != 0)
                int32_t i_3
                
                do
                    int64_t rcx_20 = *rbx_8
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                    
                    rbx_8 += 0x10
                    i_3 = i_11
                    i_11 -= 1
                while (i_3 != 1)
                rbx_8 = var_78
            
            if (rbx_8 != 0)
                sub_140a74f90(rbx_8)
            
            sub_1408464b0(&var_98)
            int32_t i_12 = i_14
            rbx_7 = var_a8
            
            if (i_12 != 0)
                int32_t i_4
                
                do
                    int64_t rcx_23 = *rbx_7
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    rbx_7 += 0x10
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
                rbx_7 = var_a8
        else
            int32_t i_9 = i_17
            uint64_t rbx_6 = var_78
            
            if (i_9 != 0)
                int32_t i_5
                
                do
                    int64_t rcx_14 = *rbx_6
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    rbx_6 += 0x10
                    i_5 = i_9
                    i_9 -= 1
                while (i_5 != 1)
                rbx_6 = var_78
            
            if (rbx_6 != 0)
                sub_140a74f90(rbx_6)
            
            sub_1408464b0(&var_98)
            int32_t i_10 = i_14
            rbx_7 = var_a8
            
            if (i_10 != 0)
                int32_t i_6
                
                do
                    int64_t rcx_17 = *rbx_7
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    rbx_7 += 0x10
                    i_6 = i_10
                    i_10 -= 1
                while (i_6 != 1)
                rbx_7 = var_a8
        
        if (rbx_7 != 0)
            sub_140a74f90(rbx_7)
        
        uint64_t rcx_25 = var_c8
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        r12 = &r12[0x11]
        r15_1 += 0x88
        arg_8 = r12
    while (r12 != rax_8)

(*(*arg1 + 0x278))(arg1)
return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_58)
