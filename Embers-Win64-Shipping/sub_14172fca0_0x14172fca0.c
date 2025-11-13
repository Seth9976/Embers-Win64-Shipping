// 函数: sub_14172fca0
// 地址: 0x14172fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6_1[0x4]
float zmm7_1[0x4]
zmm6_1, zmm7_1 = sub_141743010(arg1, arg2)
int128_t zmm7_2 = sub_141730730(arg1, zmm7_1, zmm6_1)

if (arg1[0xa] != 0)
    void* rax_1 = arg1[0xc]
    void* rcx_1 = &arg1[0xe]
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    arg1[0xa]((*(*rcx_1 + 8))(rcx_1))

uint32_t result
int512_t zmm1_2
uint128_t zmm7_3
result, zmm1_2, zmm7_3 = sub_141735ac0(arg1, zmm7_2)

if (arg1[0x12] != 0)
    void* rax_4 = arg1[0x14]
    void* rcx_4 = &arg1[0x16]
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    result = arg1[0x12]((*(*rcx_4 + 8))(rcx_4))

if (not(zmm7_3.d f<= 0f))
    int64_t* rdi_1 = arg1[4]
    int64_t rsi_1 = 0
    uint64_t r14_2 = sx.q(arg1[5].d) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[arg1[5]])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rcx_6 = *rdi_1
            zmm1_2.o = zmm7_3
            (*(*rcx_6 + 8))(rcx_6, zmm1_2)
            rsi_1 += 1
            rdi_1 = &rdi_1[1]
        while (rsi_1 != r14_2)
    
    int32_t i = 0
    int64_t r15
    int64_t var_28_1 = r15
    
    if (arg1[6].d s> 0)
        do
            r15.b = 0
            int64_t* rsi_2 = arg1[4]
            int64_t r14_3 = 0
            uint64_t r12_2 = sx.q(arg1[5].d) << 3 u>> 3
            
            if (rsi_2 u> &rsi_2[arg1[5]])
                r12_2 = 0
            
            if (r12_2 == 0)
                break
            
            do
                int64_t* rcx_7 = *rsi_2
                zmm1_2.o = zmm7_3
                r14_3 += 1
                rsi_2 = &rsi_2[1]
                r15.b |= (*(*rcx_7 + 0x20))(rcx_7, zmm1_2, zx.q(i), zx.q(arg1[6].d))
            while (r14_3 != r12_2)
            
            if (r15.b == 0)
                break
            
            i += 1
        while (i s< arg1[6].d)
    
    if (arg1[0x1a] != 0)
        void* rax_14 = arg1[0x1c]
        void* rcx_8 = &arg1[0x1e]
        
        if (rax_14 != 0)
            rcx_8 = rax_14
        
        arg1[0x1a]((*(*rcx_8 + 8))(rcx_8))
    
    int64_t* rdi_2 = *arg1
    
    if (rdi_2[0x11].b != 0)
        sub_14175a890(rdi_2, 0)
    
    int64_t* var_70
    __builtin_memset(&var_70, 0, 0x15)
    void* var_78 = &rdi_2[0x3c]
    int32_t var_58_1 = 0
    sub_141750820(&var_78)
    void* var_88
    int32_t var_80
    void* i_1
    int32_t var_54
    int32_t var_50
    
    if (i_1 != 0)
        int64_t* rdi_3 = var_70
        
        do
            void arg_8
            zmm1_2, zmm7_3 = sub_141730210(&arg_8, &i_1, zmm7_3)
            
            if (rdi_3 != 0)
                int32_t rax_36 = var_50 + 1
                var_50 = rax_36
                
                if (rax_36 s>= rdi_3[1].d)
                label_14172fec6:
                    var_58_1 += 1
                    sub_141750820(&var_78)
                    rdi_3 = var_70
                else
                    int64_t* rdx_3 = *(*rdi_3 + (sx.q(rax_36) << 3))
                    void* rcx_24 = *rdx_3
                    var_80 = rdx_3[1].d
                    
                    if (rcx_24 == 0)
                        var_88 = rcx_24
                        char var_7c_2 = 0
                        i_1.o = var_88.o
                    else
                        char var_7c_1 = *(rcx_24 + 0x40)
                        var_88 = rcx_24
                        i_1.o = var_88.o
            else
                int32_t var_60_1
                int32_t rax_19 = var_60_1 + 1
                var_60_1 = rax_19
                
                if (rax_19 s>= var_54)
                    goto label_14172fec6
        while (i_1 != 0)
    
    int32_t i_2 = 0
    
    if (*(arg1 + 0x34) s> 0)
        do
            r15.b = 0
            int64_t* rsi_3 = arg1[4]
            int64_t r14_4 = 0
            uint64_t r12_4 = sx.q(arg1[5].d) << 3 u>> 3
            
            if (rsi_3 u> &rsi_3[arg1[5]])
                r12_4 = 0
            
            if (r12_4 == 0)
                break
            
            do
                int64_t* rcx_14 = *rsi_3
                zmm1_2.o = zmm7_3
                r14_4 += 1
                rsi_3 = &rsi_3[1]
                r15.b |= (*(*rcx_14 + 0x28))(rcx_14, zmm1_2, zx.q(i_2), zx.q(*(arg1 + 0x34)), 
                    var_88, var_80)
            while (r14_4 != r12_4)
            
            if (r15.b == 0)
                break
            
            i_2 += 1
        while (i_2 s< *(arg1 + 0x34))
    
    if (arg1[0x22] != 0)
        void* rax_24 = arg1[0x24]
        void* rcx_15 = &arg1[0x26]
        
        if (rax_24 != 0)
            rcx_15 = rax_24
        
        arg1[0x22]((*(*rcx_15 + 8))(rcx_15))
    
    int64_t rsi_4 = 0
    int64_t* rdi_4 = arg1[4]
    uint64_t r14_6 = sx.q(arg1[5].d) << 3 u>> 3
    
    if (rdi_4 u> &rdi_4[arg1[5]])
        r14_6 = 0
    
    if (r14_6 != 0)
        do
            int64_t* rcx_17 = *rdi_4
            zmm1_2.o = zmm7_3
            (*(*rcx_17 + 0x10))(rcx_17, zmm1_2)
            rsi_4 += 1
            rdi_4 = &rdi_4[1]
        while (rsi_4 != r14_6)
    
    int64_t* rbx_1 = *arg1
    
    if (rbx_1[0x11].b != 0)
        sub_14175a890(rbx_1, 0)
    
    int64_t* var_70_1
    __builtin_memset(&var_70_1, 0, 0x15)
    var_78 = &rbx_1[0x3c]
    int32_t var_58_2 = 0
    result = sub_141750820(&var_78)
    void* i_3 = i_1
    
    if (i_3 != 0)
        int64_t* r10_1 = var_70_1
        
        do
            int64_t rcx_20 = *(i_3 + 0x28)
            uint32_t result_1
            int64_t result_2 = sx.q(result_1)
            int64_t r8_4 = result_2 * 2
            int64_t rdx_2 = result_2 * 3
            int64_t rax_31 = *(i_3 + 0x3c8)
            *(rcx_20 + (rdx_2 << 2)) = *(rax_31 + (rdx_2 << 2))
            *(rcx_20 + (rdx_2 << 2) + 8) = *(rax_31 + (rdx_2 << 2) + 8)
            *(*(i_3 + 0x68) + (r8_4 << 3)) = *(*(i_3 + 0x3e0) + (r8_4 << 3))
            
            if (r10_1 != 0)
                int32_t rax_41 = var_50 + 1
                var_50 = rax_41
                
                if (rax_41 s>= r10_1[1].d)
                label_141730097:
                    var_58_2 += 1
                    result = sub_141750820(&var_78)
                    r10_1 = var_70_1
                    i_3 = i_1
                else
                    int64_t* rdx_4 = *(*r10_1 + (sx.q(rax_41) << 3))
                    void* rcx_26 = *rdx_4
                    int32_t var_80_1 = rdx_4[1].d
                    
                    if (rcx_26 == 0)
                        result = 0
                        char var_7c_4 = 0
                        i_1.o = rcx_26.o
                    else
                        result = zx.d(*(rcx_26 + 0x40))
                        char var_7c_3 = result.b
                        i_1.o = rcx_26.o
                    
                    i_3 = i_1
            else
                result = result_1 + 1
                result_1 = result
                
                if (result s>= var_54)
                    goto label_141730097
        while (i_3 != 0)

return result
