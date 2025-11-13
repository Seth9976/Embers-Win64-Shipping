// 函数: sub_14246f140
// 地址: 0x14246f140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* result = arg2

if (arg4 != 0)
    int32_t* r15_1 = arg3 + 0x48
    int32_t i
    
    do
        *result = *(r15_1 - 0x48)
        result[1] = *(r15_1 - 0x40)
        result[2].d = r15_1[-0xe]
        result[3] = *(r15_1 - 0x30)
        sub_140597df0(&result[4], &r15_1[-0xa])
        result[6] = *(r15_1 - 0x18)
        result[7].b = r15_1[-4].b
        *(result + 0x39) = *(r15_1 - 0xf)
        
        if (&result[8] != &r15_1[-2])
            int32_t j_6 = result[9].d
            int64_t* rbx_1 = result[8]
            
            if (j_6 != 0)
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_1
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_1 = &rbx_1[2]
                    j = j_6
                    j_6 -= 1
                while (j != 1)
            
            int32_t j_4 = *r15_1
            int64_t* rdi_1 = *(r15_1 - 8)
            int32_t r8 = *(result + 0x4c)
            result[9].d = j_4
            
            if (j_4 != 0 || r8 != 0)
                sub_1405a4be0(&result[8], j_4, r8)
                int64_t* rbx_2 = result[8]
                
                if (j_4 != 0)
                    int32_t j_1
                    
                    do
                        sub_140596d10(rbx_2, rdi_1)
                        rbx_2 = &rbx_2[2]
                        rdi_1 = &rdi_1[2]
                        j_1 = j_4
                        j_4 -= 1
                    while (j_1 != 1)
            else
                *(result + 0x4c) = j_4
        
        if (&result[0xa] != &r15_1[2])
            int32_t j_7 = result[0xb].d
            
            if (j_7 != 0)
                int64_t* rbx_4 = result[0xa] + 8
                int32_t j_2
                
                do
                    int64_t rcx_4 = *rbx_4
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    rbx_4 = &rbx_4[3]
                    j_2 = j_7
                    j_7 -= 1
                while (j_2 != 1)
            
            int32_t j_5 = r15_1[4]
            int64_t* rdi_2 = *(r15_1 + 8)
            int32_t r8_1 = *(result + 0x5c)
            result[0xb].d = j_5
            
            if (j_5 != 0 || r8_1 != 0)
                sub_140808f70(&result[0xa], j_5, r8_1)
                void* rbx_5 = result[0xa]
                
                if (j_5 != 0)
                    int32_t j_3
                    
                    do
                        *rbx_5 = *rdi_2
                        sub_140596d10(rbx_5 + 8, &rdi_2[1])
                        rbx_5 += 0x18
                        rdi_2 = &rdi_2[3]
                        j_3 = j_5
                        j_5 -= 1
                    while (j_3 != 1)
            else
                *(result + 0x5c) = j_5
        
        result[0xc] = *(r15_1 + 0x18)
        result[0xd].d = r15_1[8]
        sub_140597970(&result[0xe], &r15_1[0xa])
        result[0x10].b = r15_1[0xe].b
        int32_t rax_11 = r15_1[0xf]
        r15_1 = &r15_1[0x22]
        *(result + 0x84) = rax_11
        result = &result[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
