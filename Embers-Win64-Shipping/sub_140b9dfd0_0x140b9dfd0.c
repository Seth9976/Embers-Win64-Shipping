// 函数: sub_140b9dfd0
// 地址: 0x140b9dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0)
    return 

uint32_t rax

if (data_143de5480 != 0)
    rax.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 != 0 && rax.b == 0)
    return 

void var_58
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_58)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* r12_1 = *(arg1 + 0x40)
void* rsi_1 = arg1 + 0x40
int64_t rdi_1 = sx.q(*(rsi_1 + 8))
void* rax_3 = &r12_1[rdi_1 * 2]

if (r12_1 != rax_3)
    void* rbx_1 = arg1 + 0x50
    
    do
        int32_t rax_4 = r12_1[1].d
        int16_t* rdx_1
        
        if (rax_4 == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *r12_1
        
        int32_t rcx_2 = rax_4 - 1
        
        if (rax_4 == 0)
            rcx_2 = 0
        
        int64_t* rax_6
        int32_t rdx_3
        rax_6, rdx_3 = sub_140b76e00(rbx_1, sub_1405969c0(rcx_2, rdx_1), r12_1)
        void* r15_1 = *(arg1 + 0x30)
        int64_t performanceCount_1 = (sx.q(*(arg1 + 0x38)) << 4) + r15_1
        performanceCount = performanceCount_1
        
        if (r15_1 != performanceCount_1)
            do
                int32_t rbx_2 = r12_1[1].d
                int64_t rdi_2 = *r12_1
                int16_t* var_78 = nullptr
                sub_1405a4c70(&var_78, sbb.d(rdx_3, rdx_3, rbx_2 != 0) + 6 + rbx_2, 0)
                memcpy(var_78, rdi_2, rbx_2 * 2)
                sub_140a2cf70(&var_78, u"L10N", 4)
                int32_t rax_11 = *(r15_1 + 8)
                int32_t rbx_3 = rax_11 - 1
                
                if (rax_11 == 0)
                    rbx_3 = 0
                
                int32_t rcx_7
                
                if (rbx_2 == 0)
                    rcx_7 = rbx_2 + 2
                
                if (rbx_2 != 0 || rbx_3 == 0xffffffff)
                    rcx_7 = 1
                
                int32_t rdx_10 = rbx_2 + rbx_3 + rcx_7
                int16_t* var_68 = var_78
                var_78 = nullptr
                int32_t var_6c
                int32_t var_5c_1 = var_6c
                int32_t var_70_1
                var_70_1.q = 0
                
                if (rdx_10 s> var_6c)
                    sub_1405947f0(&var_68, rdx_10)
                
                sub_140a2cf70(&var_68, *r15_1, rbx_3)
                int16_t* rcx_10 = var_78
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                int64_t* rbx_4 = *rax_6
                uint64_t rsi_2 = sx.q(rax_6[1].d)
                void* rdi_5 = &rbx_4[rsi_2 * 2]
                
                if (rbx_4 != rdi_5)
                    do
                        int16_t* const rdx_12 = &data_142d40450
                        
                        if (rbx_2 != 0)
                            rdx_12 = var_68
                        
                        int16_t* const rcx_11
                        
                        if (rbx_4[1].d == 0)
                            rcx_11 = &data_142d40450
                        else
                            rcx_11 = *rbx_4
                        
                        int32_t rax_15
                        rax_15, rdx_3 = sub_140a54510(rcx_11, rdx_12)
                        
                        if (rax_15 == 0)
                            goto label_140b9e268
                        
                        rbx_4 = &rbx_4[2]
                    while (rbx_4 != rdi_5)
                    
                    rsi_2 = zx.q(rax_6[1].d)
                
                int32_t rax_16 = (rsi_2 + 1).d
                rax_6[1].d = rax_16
                
                if (rax_16 s> *(rax_6 + 0xc))
                    sub_1405a4f90(rax_6)
                
                int64_t* rbx_7 = (sx.q(rsi_2.d) << 4) + *rax_6
                *rbx_7 = 0
                int16_t* rsi_3 = var_68
                rbx_7[1].d = rbx_2
                
                if (rbx_2 != 0)
                    sub_1405a4c70(rbx_7, rbx_2, 0)
                    memcpy(*rbx_7, rsi_3, rbx_2 * 2)
                else
                    *(rbx_7 + 0xc) = 0
                
                int64_t* rcx_15 = *(arg1 + 0x28)
                rdx_3 = (*(*rcx_15 + 0x20))(rcx_15, r12_1, &var_68, arg1 + 0xa0)
            label_140b9e268:
                int16_t* rcx_16 = var_68
                
                if (rcx_16 != 0)
                    rdx_3 = sub_140a74f90(rcx_16)
                
                r15_1 += 0x10
            while (r15_1 != performanceCount)
            
            rbx_1 = arg1 + 0x50
        
        r12_1 = &r12_1[2]
    while (r12_1 != rax_3)
    
    rdi_1 = zx.q(*(rsi_1 + 8))

int64_t* rbx_8 = *rsi_1

if (rdi_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_17 = *rbx_8
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rbx_8 = &rbx_8[2]
        i = rdi_1.d
        rdi_1 = zx.q(rdi_1.d - 1)
    while (i != 1)

bool cond:1_1 = *(rsi_1 + 0xc) == 0
*(rsi_1 + 8) = 0

if (not(cond:1_1))
    sub_14061cd70(rsi_1, 0)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_58)
