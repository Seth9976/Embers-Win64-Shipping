// 函数: sub_141e858b0
// 地址: 0x141e858b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rbx = *arg1
int32_t i_2 = arg1[1].d
int512_t zmm1

if (arg2 s> result)
    if (i_2 != 0)
        void* rbx_2 = rbx + 0x50
        int32_t i
        
        do
            int64_t* rcx_5 = *rbx_2
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x28))(rcx_5)
                int64_t* rcx_6 = *rbx_2
                zmm1.o = zx.o(0)
                (*(*rcx_6 + 0x10))(rcx_6, zmm1)
                int64_t* rcx_7 = *rbx_2
                
                if (rcx_7 != 0)
                    *rbx_2 = 0
                    (**rcx_7)(rcx_7, 1)
                    int64_t* rcx_8 = *rbx_2
                    
                    if (rcx_8 != 0)
                        (**rcx_8)(rcx_8, 1)
            
            int64_t rcx_9 = *(rbx_2 - 0x38)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rbx_2 += 0x58
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_140775cf0(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rbx_1 = rbx + 0x50
        int32_t i_1
        
        do
            int64_t* rcx = *rbx_1
            
            if (rcx != 0)
                (*(*rcx + 0x28))(rcx)
                int64_t* rcx_1 = *rbx_1
                zmm1.o = zx.o(0)
                result = (*(*rcx_1 + 0x10))(rcx_1, zmm1)
                int64_t* rcx_2 = *rbx_1
                
                if (rcx_2 != 0)
                    *rbx_1 = 0
                    result = (**rcx_2)(rcx_2, 1)
                    int64_t* rcx_3 = *rbx_1
                    
                    if (rcx_3 != 0)
                        result = (**rcx_3)(rcx_3, 1)
            
            int64_t rcx_4 = rbx_1[-7]
            
            if (rcx_4 != 0)
                result, zmm1 = sub_140a74f90(rcx_4)
            
            rbx_1 = &rbx_1[0xb]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0
return result
