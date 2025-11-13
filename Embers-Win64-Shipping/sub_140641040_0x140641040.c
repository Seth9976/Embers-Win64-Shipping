// 函数: sub_140641040
// 地址: 0x140641040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1

if (arg1 != 0)
    int64_t var_28 = *arg2
    int64_t* rax_2 = arg2[1]
    void* rax_3 = arg2[2]
    void* var_18_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    (*(*arg1 + 0xbf0))(arg1, &var_28)
    int64_t r10_1 = *arg2
    int64_t r9_1 = data_143e1e008
    int32_t* rax = data_143e1e038
    int64_t rcx = data_143e1e020
    int64_t rdx_1 = data_143e1e050
    int64_t r8 = data_143e1e068
    
    if (r10_1 == r9_1 || r10_1 == rax || r10_1 == rcx || r10_1 == rdx_1 || r10_1 == r8)
        int32_t r11_1 = 5
        int32_t rdx_4
        
        if (r10_1 == r9_1)
            rdx_4 = 0
        else if (r10_1 == rax)
            rdx_4 = 1
        else if (r10_1 == rcx)
            rdx_4 = 2
        else if (r10_1 != rdx_1)
            if (r10_1 == r8)
                r11_1 = 4
            
            rdx_4 = r11_1
        else
            rdx_4 = 3
        
        int512_t zmm0
        
        if (arg3 == 0)
            zmm0.o = zx.o(0)
            var_28.o = zx.o(0)
            (*(*(data_143e29f28 + 0x118) + 0x38))(zmm0, &var_28, zx.q(rdx_4))
        label_140641255:
            
            if (rax_2 != 0)
                rax_2[1].d -= 1
                
                if (rax_2[1].d == 1)
                    (**rax_2)(rax_2)
                    int32_t temp3_1 = *(rax_2 + 0xc)
                    *(rax_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rax_2 + 8))(rax_2, 1)
        else if (arg3 == 1)
            int64_t* rcx_9 = data_143e29f28 + 0x118
            (*(*rcx_9 + 0x48))(rcx_9)
        else if (arg3 == 3)
            zmm0.o = zx.o(0)
            var_28.o = zx.o(0)
            (*(*(data_143e29f28 + 0x118) + 0x58))(zmm0, &var_28, zx.q(rdx_4))
            goto label_140641255
    else
        int64_t var_20_2 = arg2[1]
        void* rax_6 = arg2[2]
        int32_t* arg_8 = nullptr
        int32_t* arg_20 = nullptr
        var_28 = r10_1
        void* var_18_2 = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 8) += 1
        
        sub_140d44bb0(sub_140d449f0(), &var_28, &arg_8, &arg_20)
        int32_t* rax_8 = arg_8
        uint64_t r8_2 = 0xffffffff
        uint64_t rdx_3
        
        if (rax_8 == 0)
            rdx_3 = 0xffffffff
        else
            rdx_3 = zx.q(*rax_8)
        
        rax = arg_20
        
        if (rax != 0)
            r8_2 = zx.q(*rax)
        
        if (arg3 == 0)
            int64_t* rcx_3 = data_143e29f28 + 0x118
            (*(*rcx_3 + 0x18))(rcx_3, rdx_3, r8_2, 0, 0)
        else if (arg3 == 1)
            int64_t* rcx_5 = data_143e29f28 + 0x118
            (*(*rcx_5 + 0x20))(rcx_5, rdx_3, r8_2, 0, 0)
    
    rbx_1 = arg2[2]
else
    rbx_1 = arg2[2]

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
