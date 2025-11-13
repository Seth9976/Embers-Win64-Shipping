// 函数: sub_140b38050
// 地址: 0x140b38050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
sub_140b2f150(&arg_20, "CsvProfiler")

if (data_143de8178 != 0)
    int32_t rax_1 = *arg1
    int128_t var_48_1 = arg2
    
    if (rax_1 s>= 0)
        *arg1 = rax_1 - 1
        
        if (rax_1 == 1)
            int64_t arg_10 = 0
            void* var_e8
            sub_140b37b10(arg1, &var_e8, &arg_10)
            int64_t* var_e0
            
            if (var_e0 != 0)
                var_e0[1].d -= 1
                
                if (var_e0[1].d == 1)
                    (**var_e0)(var_e0)
                    int32_t rax_5 = *(var_e0 + 0xc)
                    *(var_e0 + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        (*(*var_e0 + 8))(var_e0, 1)
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t performanceCount_2 = performanceCount
    int64_t rdi_2 = performanceCount_2 - *(arg1 + 0x10)
    double zmm0_2 = sub_140a48b40()
    int64_t zmm1_1 = float.d(rdi_2)
    
    if (rdi_2 s< 0)
        zmm1_1 = zmm1_1 f+ 1.8446744073709552e+19
    
    uint64_t r15_1 = zx.q(data_143de7068)
    arg2.d = fconvert.s(zmm0_2 f* zmm1_1 * 1000.0)
    
    if (data_143de8178 != 0 && *(r15_1 + &data_143de7240) != 0)
        void* rax_7 = TlsGetValue(data_143de7a5c)
        void* rdi_3 = rax_7
        
        if (rax_7 == 0)
            rdi_3 = sub_140b35c00()
        
        char rax_9 = (*(rdi_3 + 0x38)).b
        void* const rax_10
        
        if (rax_9 != 0)
            rax_10 = *(rdi_3 + 0x30)
        else
            rax_10 = j_sub_140a82f30(0x2008)
            
            if (rax_10 == 0)
                rax_10 = nullptr
            else
                *(rax_10 + 0x2000) = 0
            
            void* rcx_7 = *(rdi_3 + 0x30)
            
            if (rcx_7 != 0)
                *(rcx_7 + 0x2000) = rax_10
                *(rdi_3 + 0x30) = rax_10
            else
                *(rdi_3 + 0x28) = rax_10
                *(rdi_3 + 0x30) = rax_10
        
        int64_t* rbx_4 = (zx.q(rax_9) << 5) + rax_10
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        uint64_t rcx_9 = zx.q(data_143de7060)
        *rbx_4 = performanceCount_1
        rbx_4[1] = rcx_9
        rbx_4[3].d = arg2.d
        rbx_4[2].d = r15_1.d
        *(rbx_4 + 0x14) = 0x500
        performanceCount_2 = performanceCount
        *(rdi_3 + 0x38) += 1
    
    void var_d8
    sub_140b6c480(&var_d8)
    int64_t var_88
    arg2.d = float.s(var_88)
    
    if (var_88 s< 0)
        arg2.d = arg2.d f+ 1.84467441e+19f
    
    arg2.d = arg2.d f* 9.53674316e-07f
    int64_t var_78
    int128_t zmm7
    zmm7.d = float.s(var_78)
    
    if (var_78 s< 0)
        zmm7.d = zmm7.d f+ 1.84467441e+19f
    
    zmm7.d = zmm7.d f* 9.53674316e-07f
    int64_t var_98
    int128_t zmm2
    zmm2.d = float.s(var_98)
    
    if (var_98 s< 0)
        zmm2.d = zmm2.d f+ 1.84467441e+19f
    
    zmm2.d = zmm2.d f* 9.53674316e-07f
    sub_140b43f30("PhysicalUsedMB", 0, sub_140b43f30("MemoryFreeMB", 0, zmm2, 0), 0)
    sub_140b43f30("VirtualUsedMB", 0, zmm7, 0)
    int512_t zmm6_1
    zmm6_1.o = var_48_1
    
    if (*(arg1 + 0x40) == 0)
        sub_140b43850(arg1)
    
    arg1[1] += 1
    *(arg1 + 0x10) = performanceCount_2

int128_t zmm0_1 = zx.o(0)
char var_138 = 2
int32_t var_134 = -1
int64_t var_128
__builtin_memset(&var_128, 0, 0x20)

if (sub_140b42380(&arg1[0xc], &var_138) != 0 && var_138 == 1)
    if (data_143de8178 == 0 && data_143de817a == 0)
    label_140b383f4:
        sub_140b362e0(&arg1[0xc], &var_138)
        int64_t* var_100
        int64_t* rdi_4 = var_100
        
        if (rdi_4 != 0)
            sub_140b2ce40(rdi_4, &arg1[8])
            int64_t* rbx_5 = rdi_4[1]
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t rax_26 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (rax_26 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
                
                rdi_4 = var_100
            
            j_sub_140a74f90(rdi_4)
        
        int64_t* rcx_24 = *(arg1 + 0x48)
        (*(*rcx_24 + 0x18))(rcx_24)
        
        if (arg1[0xa] s<= 1)
        label_140b3850b:
            char rax_32
            
            if (data_143de7a4c == 0)
                sub_140af2b60()
                rax_32 = sub_140b21a10(&data_143dbb3f0, u"ExitAfterCsvProfiling")
            
            if (data_143de7a4c != 0 || rax_32 != 0)
                sub_140b721f0(0)
        else
            arg1[0xa] = 0
            
            if (arg1[0xb] s<= 0xffffffff)
                sub_1405947f0(&arg1[8], 0)
            
            int16_t* rax_29 = *(arg1 + 0x20)
            
            if (rax_29 != 0)
                *rax_29 = 0
            
            int32_t rax_30 = data_143de7a48
            
            if (rax_30 == 0)
                goto label_140b3850b
            
            int32_t rdx_6 = data_143de8154
            
            if (rdx_6 s<= 0)
                goto label_140b3850b
            
            bool cond:3_1 = rax_30 == 0
            
            if (rax_30 s> 0)
                data_143de7a48 = rax_30 - 1
                cond:3_1 = rax_30 == 1
            
            if (cond:3_1)
                goto label_140b3850b
            
            int64_t var_158
            __builtin_memset(&var_158, 0, 0x20)
            int64_t var_148
            sub_140b33560(arg1, rdx_6, &var_158, &var_148, 0)
            int64_t rcx_27 = var_158
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            int64_t rcx_28 = var_148
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
    else if (var_134 != data_143de8174)
        sub_140599090(&arg1[0x44])
        data_143de817a = 1
        data_143de8178 = 0
        
        if (*(arg1 + 0x40) == 0)
            void* rax_20 = sub_140a7b0a0()
            
            if (rax_20 != 0)
                sub_140a8dc00(rax_20, 0)
            
            sub_140a751d0()
            sub_140b39850(arg1)
            sub_140a751d0()
            void* rax_23 = sub_140a7b0a0()
            
            if (rax_23 != 0)
                sub_140a89de0(rax_23, 0)
            
            goto label_140b383f4
        
        if (*data_143de7080 == 1)
            void* rax_34 = sub_140a7b0a0()
            
            if (rax_34 != 0)
                sub_140a8dc00(rax_34, 0)
            
            sub_140a751d0()
            int64_t* rcx_31 = *(arg1 + 0x48)
            (*(*rcx_31 + 0x20))(rcx_31, 0xffffffff, 0)
            sub_140a751d0()
            void* rax_38 = sub_140a7b0a0()
            
            if (rax_38 != 0)
                sub_140a89de0(rax_38, 0)
    else
        arg1[6] = arg1[1]

data_143de8174 += 1
void* rcx_34 = zmm0_1:8.q

if (rcx_34 != 0)
    int32_t rax_39 = *(rcx_34 + 8)
    *(rcx_34 + 8) -= 1
    
    if (rax_39 == 1)
        int64_t* rbx_6 = zmm0_1:8.q
        (**rbx_6)(rbx_6)
        int32_t r14_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (r14_1 == 1)
            int64_t* rcx_36 = zmm0_1:8.q
            (*(*rcx_36 + 8))(rcx_36, zx.q(r14_1))

int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_38 = var_128

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

return sub_140b30b10(&arg_20)
