// 函数: sub_140d31650
// 地址: 0x140d31650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
TEB* gsbase

if (data_143e1d930 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d930)
    
    if (data_143e1d930 == 0xffffffff)
        sub_140b58260(&data_143e1d928, u"/Script/Engine", 1)
        _Init_thread_footer(&data_143e1d930)

int64_t result = sub_140d21410()

if (data_143e1d900 != 0)
    void var_a0
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_a0)
    int64_t* rdx_2 = data_143e1d8f8
    data_143e1d8f8 = 0
    int32_t r15_1 = 0
    int32_t rsi_1 = 0
    int32_t r14_1 = 0
    int64_t r12_1 = 0
    int64_t* r13_1 = rdx_2
    int64_t rcx_2 = sx.q(data_143e1d900) << 3
    int64_t* var_1a8
    __builtin_memset(&var_1a8, 0, 0x30)
    uint64_t i_11 = rcx_2 u>> 3
    
    if (rdx_2 u> &rdx_2[sx.q(data_143e1d900)])
        i_11 = 0
    
    data_143e1d900.q = 0
    uint64_t i_4 = i_11
    int64_t* var_198
    int64_t* var_188
    
    if (i_11 != 0)
        do
            void* i_9 = (*r13_1)()
            void* i_6 = i_9
            
            for (void* i = *(i_9 + 0x20); i != 0; i = *(i + 0x20))
                i_6 = i
            
            int64_t rax_7 = *(i_6 + 0x18)
            int64_t rdx_3 = data_143de5770
            int64_t var_178 = rax_7
            int64_t rax_8
            
            if ((-0x8000000000000000 & rdx_3) == 0 || rax_7 != 0)
                int32_t var_120
                rax_8 = *sub_140b63580(&data_143de5770, &var_120)
                rax_8.b = var_178 == rax_8
            else
                char* rdx_4 = rdx_3 & 0x7fffffffffffffff
                int64_t* rcx_3 = &var_178
                
                if (data_143de577c != rax_7.b)
                    rax_8 = sub_140b5b9d0(rcx_3, rdx_4)
                else
                    rax_8 = sub_140b5b8c0(rcx_3, rdx_4)
            
            int64_t* rax_11
            int64_t rbx_1
            
            if (rax_8.b == 0)
                void* i_1 = *(i_9 + 0x20)
                void* i_5 = i_9
                
                for (; i_1 != 0; i_1 = *(i_1 + 0x20))
                    i_5 = i_1
                
                if (*(i_5 + 0x18) != data_143e1d928)
                    rbx_1 = sx.q(r15_1)
                    r15_1 = (rbx_1 + 1).d
                    int64_t var_180_1
                    var_180_1.d = r15_1
                    
                    if (r15_1 s> var_180_1:4.d)
                        sub_1405a4d70(&var_188)
                        r15_1 = var_180_1.d
                    
                    rax_11 = var_188
                else
                    rbx_1 = sx.q(r14_1)
                    r14_1 = (rbx_1 + 1).d
                    int64_t var_1a0_1
                    var_1a0_1.d = r14_1
                    
                    if (r14_1 s> var_1a0_1:4.d)
                        sub_1405a4d70(&var_1a8)
                        r14_1 = var_1a0_1.d
                    
                    rax_11 = var_1a8
            else
                rbx_1 = sx.q(rsi_1)
                rsi_1 = (rbx_1 + 1).d
                int64_t var_190_1
                var_190_1.d = rsi_1
                
                if (rsi_1 s> var_190_1:4.d)
                    sub_1405a4d70(&var_198)
                    rsi_1 = var_190_1.d
                
                rax_11 = var_198
            
            r13_1 = &r13_1[1]
            rax_11[rbx_1] = i_9
            r12_1 += 1
        while (r12_1 != i_4)
    
    void var_118
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_118)
    int64_t* rbx_2 = var_198
    int64_t rdi_2 = 0
    void* rcx_8 = &rbx_2[sx.q(rsi_1)]
    uint64_t rsi_5 = (rcx_8 - rbx_2 + 7) u>> 3
    
    if (rbx_2 u> rcx_8)
        rsi_5 = 0
    
    if (rsi_5 != 0)
        do
            int64_t* rcx_9 = *rbx_2
            
            if (rcx_9[0x23] == 0)
                (*(*rcx_9 + 0x390))(rcx_9)
            
            rbx_2 = &rbx_2[1]
            rdi_2 += 1
        while (rdi_2 != rsi_5)
    
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_118)
    void var_100
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_100)
    int64_t* rbx_3 = var_1a8
    int64_t rdi_3 = 0
    void* rcx_12 = &rbx_3[sx.q(r14_1)]
    uint64_t rsi_9 = (rcx_12 - rbx_3 + 7) u>> 3
    
    if (rbx_3 u> rcx_12)
        rsi_9 = 0
    
    if (rsi_9 != 0)
        do
            int64_t* rcx_13 = *rbx_3
            
            if (rcx_13[0x23] == 0)
                (*(*rcx_13 + 0x390))(rcx_13)
            
            rbx_3 = &rbx_3[1]
            rdi_3 += 1
        while (rdi_3 != rsi_9)
    
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_100)
    void var_e8
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_e8)
    int64_t* rbx_4 = var_188
    int64_t rdi_4 = 0
    void* rcx_16 = &rbx_4[sx.q(r15_1)]
    uint64_t rsi_13 = (rcx_16 - rbx_4 + 7) u>> 3
    
    if (rbx_4 u> rcx_16)
        rsi_13 = 0
    
    if (rsi_13 != 0)
        do
            int64_t* rcx_17 = *rbx_4
            
            if (rcx_17[0x23] == 0)
                (*(*rcx_17 + 0x390))(rcx_17)
            
            rbx_4 = &rbx_4[1]
            rdi_4 += 1
        while (rdi_4 != rsi_13)
    
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_e8)
    sub_140bdd8e0()
    
    if (data_143e1ac30 != 0 || data_143e1ac20 != 0)
        i_4 = 0
        int32_t i_8 = 0
        EnterCriticalSection(&data_143e1ac38)
        int32_t i_14 = 0
        int32_t i_15 = 0
        
        if (&i_4 != &data_143e1ac28)
            uint64_t i_10 = data_143e1ac28
            data_143e1ac28 = 0
            i_15 = data_143e1ac30
            i_4 = i_10
            i_14 = data_143e1ac34
            i_8 = i_14
            data_143e1ac30.q = 0
            i_8 = i_15
        
        int64_t r14_2 = sx.q(data_143e1ac20)
        
        if (r14_2.d != 0)
            int32_t rdx_9 = i_15 + r14_2.d
            
            if (rdx_9 s> i_14)
                sub_14061cd70(&i_4, rdx_9)
            
            memmove((sx.q(i_8) << 4) + i_4, data_143e1ac18, (r14_2 << 4).d)
            i_15 = i_8 + r14_2.d
            data_143e1ac20 = 0
            i_8 = i_15
        
        LeaveCriticalSection(&data_143e1ac38)
        uint64_t i_2 = i_4
        int64_t rdi_8 = (sx.q(i_15) << 4) + i_2
        int64_t var_170 = 0
        int64_t var_168_1 = 0
        
        for (; i_2 != rdi_8; i_2 += 0x10)
            int32_t rax_18 = *(i_2 + 8)
            int32_t r8_3 = rax_18 - 1
            
            if (rax_18 == 0)
                r8_3 = 0
            
            sub_140a20ba0(&var_170, *i_2, r8_3)
            sub_140a20ba0(&var_170, &data_142d576a0, 1)
        
        void var_78
        int64_t* rax_19 = sub_140aae420(&var_78, &var_170)
        void var_b8
        char* var_88
        char** rax_21 = sub_140a96390(&var_88, 
            _vfprintf_p_l(&var_b8, Default Property warnings and errors:\n{0}", Core"))
        int64_t rcx_28 = *rax_19
        int64_t* rcx_29 = rax_19[1]
        int32_t var_60_1 = 4
        
        if (rcx_29 != 0)
            rcx_29[1].d += 1
        
        int32_t rcx_30 = rax_19[2].d
        char var_38_1 = 1
        int32_t* var_160 = nullptr
        int32_t var_158_1 = 1
        sub_1405a4b40(&var_160, 1, 0)
        int32_t* rcx_32 = var_160
        *rcx_32 = var_60_1
        int64_t var_58
        *(rcx_32 + 8) = var_58
        *(rcx_32 + 8) = var_58
        rcx_32[2] = var_58.d
        *(rcx_32 + 8) = var_58
        rcx_32[0xa].b = 0
        
        if (var_38_1 != 0)
            *(rcx_32 + 0x10) = rcx_28
            *(rcx_32 + 0x18) = rcx_29
            
            if (rcx_29 != 0)
                rcx_29[1].d += 1
            
            rcx_32[8] = rcx_30
            rcx_32[0xa].b = 1
        
        char* var_130 = *rax_21
        void* rax_29 = rax_21[1]
        void* var_128_1 = rax_29
        
        if (rax_29 != 0)
            *(rax_29 + 8) += 1
        
        void var_d0
        int64_t* rax_30 = sub_140aac870(&var_d0, &var_130, &var_160)
        int64_t var_148 = *rax_30
        int64_t* rcx_35 = rax_30[1]
        
        if (rcx_35 != 0)
            rcx_35[1].d += 1
        
        int32_t var_138_1 = rax_30[2].d
        int64_t* var_c8
        
        if (var_c8 != 0)
            var_c8[1].d -= 1
            
            if (var_c8[1].d == 1)
                (**var_c8)(var_c8)
                int32_t rax_34 = *(var_c8 + 0xc)
                *(var_c8 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*var_c8 + 8))(var_c8, 1)
        
        sub_140596f50(&var_160)
        
        if (var_38_1 != 0)
            char var_38_2 = 0
            
            if (rcx_29 != 0)
                rcx_29[1].d -= 1
                
                if (rcx_29[1].d == 1)
                    (**rcx_29)(rcx_29)
                    int32_t rax_38 = *(rcx_29 + 0xc)
                    *(rcx_29 + 0xc) -= 1
                    
                    if (rax_38 == 1)
                        (*(*rcx_29 + 8))(rcx_29, 1)
        
        int64_t* rdi_11 = rax_21[1]
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t rax_42 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        int64_t* rdi_12 = rax_19[1]
        
        if (rdi_12 != 0)
            rdi_12[1].d -= 1
            
            if (rdi_12[1].d == 1)
                (**rdi_12)(rdi_12)
                int32_t rax_46 = *(rdi_12 + 0xc)
                *(rdi_12 + 0xc) -= 1
                
                if (rax_46 == 1)
                    (*(*rdi_12 + 8))(rdi_12, 1)
        
        sub_140b21610(0, &var_148, nullptr)
        
        if (rcx_35 != 0)
            rcx_35[1].d -= 1
            
            if (rcx_35[1].d == 1)
                (**rcx_35)(rcx_35)
                int32_t rax_50 = *(rcx_35 + 0xc)
                *(rcx_35 + 0xc) -= 1
                
                if (rax_50 == 1)
                    (*(*rcx_35 + 8))(rcx_35, 1)
        
        int64_t* var_b0
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rbx_5 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rbx_5 == 1)
                    (*(*var_b0 + 8))(var_b0, zx.q(rbx_5))
        
        int64_t rcx_49 = var_170
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
        
        int32_t i_7 = i_8
        uint64_t i_12 = i_4
        
        if (i_7 != 0)
            int32_t i_3
            
            do
                int64_t rcx_50 = *i_12
                
                if (rcx_50 != 0)
                    sub_140a74f90(rcx_50)
                
                i_12 += 0x10
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        uint64_t i_13 = i_4
        
        if (i_13 != 0)
            sub_140a74f90(i_13)
    
    if (rdx_2 != 0)
        sub_140a74f90(rdx_2)
    
    int64_t* rbx_6 = var_1a8
    
    if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    int64_t* rbx_7 = var_198
    
    if (rbx_7 != 0)
        sub_140a74f90(rbx_7)
    
    int64_t* rbx_8 = var_188
    
    if (rbx_8 != 0)
        sub_140a74f90(rbx_8)
    
    result =
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_a0)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
