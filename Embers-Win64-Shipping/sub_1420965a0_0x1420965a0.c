// 函数: sub_1420965a0
// 地址: 0x1420965a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
int64_t arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_1
int512_t zmm0
rax_1, zmm0 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t r9 = *rax_1
char rax_2 = (*(r9 + 0x48))(rax_1, *arg1, sx.q(*(arg1 + 0xc)), r9)
void* result = nullptr

if (rax_2 != 0xff)
    int64_t r9_1 = *rax_1
    int64_t* var_48
    (*(r9_1 + 0x40))(rax_1, &var_48, zx.q(rax_2), r9_1)
    int64_t* rcx_3 = var_48
    int64_t* var_40
    
    if ((**rcx_3)(rcx_3, *arg1, sx.q(*(arg1 + 0xc))) != 0)
        int64_t* rcx_4 = var_48
        int32_t rax_6 = (*(*rcx_4 + 0x38))(rcx_4)
        int64_t* rcx_5 = var_48
        int64_t rdx_4 = *rcx_5
        int32_t rax_7 = (*(rdx_4 + 0x28))(rcx_5, rdx_4)
        int64_t* rcx_6 = var_48
        int64_t rdx_5 = *rcx_6
        int32_t rax_8
        int64_t rdx_6
        rax_8, rdx_6 = (*(rdx_5 + 0x30))(rcx_6, rdx_5)
        int32_t rdi_1
        
        if (rax_6 != 0x10)
            if (rax_6 != 8)
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t temp3_1 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_40 + 8))(var_40, 1)
                
                return nullptr
            
            rdi_1 = rax_6 - 6
        else
            rdi_1 = 0xa
        
        int64_t* rcx_7 = var_48
        zmm0.o = zx.o(0)
        int128_t var_38
        __builtin_memset(&var_38, 0, 0x18)
        rdx_6.b = 1
        (*(*rcx_7 + 0x20))(zmm0, rdx_6, zx.q(rax_6), &var_38)
        arg_8 = 0
        void* result_1 = sub_1423bea40(rax_7, rax_8, rdi_1, 0)
        result = result_1
        
        if (result_1 != 0)
            memcpy(sub_140bcb6b0(**(*(result_1 + 0xd0) + 0x18) + 0x10, 2), var_38.q, 
                sub_140bc7f20(**(*(result + 0xd0) + 0x18) + 0x10))
            sub_140bd1d40(**(*(result + 0xd0) + 0x18) + 0x10)
            (*(*result + 0x2f8))(result)
        
        int64_t rcx_20 = var_38.q
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp1_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_40 + 8))(var_40, 1)

return result
