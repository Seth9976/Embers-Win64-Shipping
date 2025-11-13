// 函数: sub_141e0f0c0
// 地址: 0x141e0f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = arg4
int128_t zmm6 = arg2
void* const rdi_1

if (arg1 == 0)
    rdi_1 = nullptr
else
    void* rdi = arg1[4]
    
    if (rdi != 0)
        void* rax_1 = sub_142591550()
        void* rdx_1 = *(rdi + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8
            r8.b = 1
            zmm6 = sub_141f3e990(arg1[4], 1, r8.b)
    
    rdi_1 = arg1[0x48]
    
    if (rdi_1 == 0)
        void* rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5
        rdi_1 = rax_5

char rdx_2 = arg1[0x1f].b

if (rdx_2 != 0)
    sub_141e0b990(rdi_1, rdx_2)
    arg1[0x1f].b = 0

void* rcx_4 = arg1[4]
char rax_6

if (rcx_4 != 0)
    rax_6 = sub_141f4ac20(rcx_4, zmm6.d)

void* result

if (rcx_4 == 0 || rax_6 == 0)
    (*(*arg1 + 0x2f8))(arg1, zmm6)
    (*(*arg1 + 0x288))(arg1, zmm6)
    (*(*arg1 + 0x290))(arg1, zmm6)
    int64_t* rsi_2 = arg1[0xf]
    void* r12_1 = &rsi_2[sx.q(arg1[0x10].d)]
    
    if (rsi_2 != r12_1)
        do
            int64_t* rdi_3 = *rsi_2
            char r14_1 = 1
            
            if (rdi_3[0xa].b != 0)
                int32_t r15_1 = *(rdi_3 + 0x174)
                
                if (r15_1 != 0xffffffff)
                    void* rbp_1 = arg1[4]
                    r14_1 = 0
                    
                    if (rbp_1 != 0)
                        void* rax_14 = sub_142591550()
                        void* rdx_4 = *(rbp_1 + 0x10)
                        int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                        
                        if (rax_15.d s<= *(rdx_4 + 0x38)
                                && *(*(rdx_4 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30)
                            void* r8_1
                            r8_1.b = 1
                            sub_141f3e990(arg1[4], 1, r8_1.b)
                    
                    void* rcx_15 = arg1[0x48]
                    
                    if (rcx_15 == 0)
                        void* rax_18 = (*(*arg1 + 0x300))(arg1)
                        arg1[0x48] = rax_18
                        rcx_15 = rax_18
                    
                    int64_t* arg_8
                    int64_t* rax_19 = sub_141df60d0(rcx_15, r15_1, &arg_8)
                    int32_t zmm3 = rdi_3[0x29].d
                    int32_t zmm2 = *(rdi_3 + 0x16c)
                    arg2 = rdi_3[0x2e].d
                    int32_t zmm0_1 = rdi_3[0x25].d
                    *rax_19 = *rdi_3
                    rax_19[6] = &rdi_3[8]
                    rax_19[7] = &rdi_3[6]
                    int64_t* rcx_19 = arg_8
                    rax_19[4].d = zmm0_1
                    *(rax_19 + 0x24) = arg2.d
                    rax_19[5].d = zmm2
                    *(rax_19 + 0x14) = zmm3
                    rax_19[2].d = 0x3f800000
                    *(rax_19 + 0x1c) = 0
                    
                    if (rcx_19 != 0)
                        sub_141e6c390(rcx_19)
                
                rdi_3[0xa].b = 0
            
            if (rdi_3[0xa].b == 0 || r14_1 != 0)
                rdi_3[6].d = 0xfffffffe
                rdi_3[7].d = 0xfffffffe
            
            rsi_2 = &rsi_2[1]
        while (rsi_2 != r12_1)
        
        rbp = arg4
    
    int32_t zmm6_1 = sub_141e0fe70(arg1)
    (*(*arg1 + 0x2b8))(arg1, zmm6_1)
    (*(*arg1 + 0x2c0))(arg1, zmm6_1)
    int32_t zmm6_2
    result, zmm6_2 = sub_14245e990(arg1, zmm6_1)
    
    if (arg3 == 0)
        int64_t* rax_22 = sub_1424a3bf0()
        void* rax_23 = rax_22[0x23]
        
        if (rax_23 == 0)
            int64_t rdx_6 = *rax_22
            (*(rdx_6 + 0x390))(rax_22, rdx_6)
            rax_23 = rax_22[0x23]
        
        int64_t* rdi_4
        
        if ((*(rax_23 + 0x7b8) & 4) == 0)
            if (*data_143f3b578 != 0)
                rdi_4.b = 1
            else
                rdi_4.b = 0
        else if ((*(arg1 + 0x31) & 1) != 0 || *data_143f3b578 != 0)
            rdi_4.b = 1
        else
            rdi_4.b = 0
        
        if ((*(*arg1 + 0x278))(arg1).b == 0 || *data_143f3b560 == 0 || *data_143f3b528 == 0
                || rdi_4.b == 0 || zmm6_2 f== 0f || arg1[6].b == 2)
            result.b = 1
        else
            result.b = 0
    
    if (arg3 != 0 || result.b != 0)
        result.b = 1
    
    if (rbp != 0 && result.b != 0)
        sub_141e08380(arg1)
        return sub_141e09d20(arg1)
else
    sub_141e30570(&arg1[0x20], arg1[4])
    *(rdi_1 + 0x420) = 0xffff
    *(rdi_1 + 0x418) = -1
    int512_t zmm1
    zmm1.o = zmm6
    (*(*arg1 + 0x288))(arg1, zmm1)
    zmm1.o = zmm6
    (*(*arg1 + 0x290))(arg1, zmm1)
    void** rdi_2 = arg1[0xf]
    int64_t rbx_1 = 0
    result = &rdi_2[arg1[0x10]]
    uint64_t rsi_1 = sx.q(arg1[0x10].d) << 3 u>> 3
    
    if (rdi_2 u> result)
        rsi_1 = 0
    
    if (rsi_1 != 0)
        do
            result = *rdi_2
            *(result + 0x50) = 0
            *(result + 0x30) = 0xfffffffe
            *(result + 0x38) = 0xfffffffe
            *(result + 0x48) = 0
            
            if (*(result + 0x4c) s<= 0xffffffff)
                result = sub_14083ad30(result + 0x40, 0)
            
            rdi_2 = &rdi_2[1]
            rbx_1 += 1
        while (rbx_1 != rsi_1)

return result
