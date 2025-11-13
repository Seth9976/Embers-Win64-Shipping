// 函数: sub_14065dc40
// 地址: 0x14065dc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38 = 0
int32_t i_4 = 0

if (&var_38 != arg2)
    int32_t i_2 = arg2[1].d
    void* rdi_1 = *arg2
    i_4 = i_2
    
    if (i_2 != 0)
        sub_14065dd80(&var_38, i_2, 0)
        void* rdx_1 = rdi_1 + 0x10
        void* rcx_2 = var_38 + 0x10
        int32_t i
        
        do
            *(rcx_2 - 0x10) = *(rdx_1 - 0x10)
            void* rax_2 = *(rdx_1 - 8)
            *(rcx_2 - 8) = rax_2
            
            if (rax_2 != 0)
                *(rax_2 + 8) += 1
            
            *rcx_2 = *rdx_1
            int32_t rax_4 = *(rdx_1 + 8)
            rdx_1 += 0x20
            *(rcx_2 + 8) = rax_4
            rcx_2 += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)

int32_t var_28 = arg3.d
int32_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143cdcb00), &var_38)
int32_t i_3 = i_4

if (i_3 != 0)
    int64_t* rdi_3 = var_38 + 8
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi_3
        
        if (rbx_2 != 0)
            result = rbx_2[1].d
            rbx_2[1].d -= 1
            
            if (result == 1)
                (**rbx_2)(rbx_2)
                result = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_3 = &rdi_3[4]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

uint64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
