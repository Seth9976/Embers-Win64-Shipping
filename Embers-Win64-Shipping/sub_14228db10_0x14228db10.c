// 函数: sub_14228db10
// 地址: 0x14228db10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433152d8

if (data_143f5b298 != 0)
    void* rcx = arg1[6]
    
    if (rcx != 0)
        void var_28
        sub_142435ed0(rcx, &var_28)
        int64_t* var_20
        
        if (sub_141e80b60(&var_28) != 0)
            sub_141e7b450(var_20, arg1[6], 0)
        sub_141e71cd0(&var_28)

int32_t i = 0

if (arg1[5].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rdi_1 = *(r14_1 + arg1[4])
        
        if (arg1[8].b != 0 && rdi_1 != 0)
            void* rax_3 = sub_142546fa0()
            void* rcx_4 = rdi_1[2]
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                (*(*rdi_1 + 0x888))(rdi_1, 0)
        
        sub_141efdf10(rdi_1)
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[5].d)

void* rcx_7 = arg1[6]

if (rcx_7 != 0)
    sub_14242eb30(rcx_7, 1, 1, 0)
    int64_t* rcx_8 = data_143f5b298
    (*(*rcx_8 + 0x4a0))(rcx_8, arg1[6])
    sub_142440200(arg1[6])

int64_t rcx_10 = arg1[4]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*arg1 = &data_142d44d70
void* rcx_11 = data_143e1a338

if (rcx_11 != 0 && arg1[1].b != 0)
    sub_140bb6e00(rcx_11, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
