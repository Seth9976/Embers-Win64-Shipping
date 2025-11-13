// 函数: sub_140fc8000
// 地址: 0x140fc8000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140fc81f0(arg1, arg2) == 0)
    return 0

int64_t* rcx = *arg2
void arg_20
int64_t* rax_2 = (*(*rcx + 0xa0))(rcx, &arg_20)
int64_t rdx_1 = data_143e2b878
int64_t rcx_1 = *rax_2
int64_t arg_18 = rcx_1
int64_t* i_2
int64_t* result

if ((-0x8000000000000000 & rdx_1) == 0 || rcx_1 != 0)
    result = *sub_140b63580(&data_143e2b878, &i_2)
    result.b = arg_18 == result
else
    int64_t* rcx_2 = &arg_18
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    
    if (data_143e2b884 != 0)
        result = sub_140b5b9d0(rcx_2, rdx_2)
    else
        result = sub_140b5b8c0(rcx_2, rdx_2)

if (result.b != 0)
    int64_t rax_4 = *arg1
    int32_t rbp_1 = 0
    i_2 = nullptr
    int32_t i_4 = 0
    
    if ((*(rax_4 + 0xc8))(arg1, &i_2).b != 0)
        for (int64_t* i = i_2; i != &i[sx.q(i_4) * 2]; i = &i[2])
            int64_t* rcx_4 = *arg2
            
            if ((*(*rcx_4 + 8))(rcx_4, *i) != 0)
                int64_t* rcx_5 = *i
                int64_t* rbx_1 = i[1]
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                rbp_1 = (*(*rcx_5 + 0x108))(rcx_5)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        int64_t rdx_6 = *rbx_1
                        (*rdx_6)(rbx_1, rdx_6)
                        int32_t temp6_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                break
        
        int64_t* rbx_2 = arg2[1]
        int64_t* rcx_8 = *arg2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        (*(*rcx_8 + 0x100))(rcx_8, zx.q(rbp_1))
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int32_t i_3 = i_4
    
    if (i_3 != 0)
        void* rdi_4 = &i_2[1]
        int32_t i_1
        
        do
            int64_t* rbx_3 = *rdi_4
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_4 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int64_t* i_5 = i_2
    
    if (i_5 != 0)
        sub_140a74f90(i_5)

result.b = 1
return result
