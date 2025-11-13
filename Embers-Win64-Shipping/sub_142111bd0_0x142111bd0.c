// 函数: sub_142111bd0
// 地址: 0x142111bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f48b28 != 0)
    return 

void var_38
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_38)
uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_1.b != 0)
    data_143f48b2c += 1
    int64_t rsi_1 = 0
    int64_t i_1 = 7
    int64_t i
    
    do
        if (*(rsi_1 + &data_143f48af0) == 0)
            int16_t* rdi_1 = *(rsi_1 + &data_143a2e780)
            int32_t rdx_1 = 0
            int64_t var_58 = 0
            int32_t rcx_2 = 0
            int32_t var_50_1 = 0
            int32_t var_4c_1 = 0
            
            if (rdi_1 != 0 && *rdi_1 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rdi_1[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_1.d + 1)
                    rcx_2 = var_4c_1
                    rdx_1 = var_50_1
                
                int32_t rax_2 = rbx_1.d + 1 + rdx_1
                int32_t var_50_2 = rax_2
                
                if (rax_2 s> rcx_2)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rdi_1, (rbx_1.d + 1) * 2)
            
            int16_t* var_48
            sub_140d2b3d0(&var_48, &var_58, nullptr)
            int64_t rcx_7 = var_58
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int16_t* const rbx_3 = &data_142d40450
            int32_t var_40
            
            if (var_40 != 0)
                rbx_3 = var_48
            
            void* rax_4 = sub_140d2ee50(sub_1425312f0(), nullptr, rbx_3, 0)
            *(rsi_1 + &data_143f48af0) = rax_4
            
            if (rax_4 != 0)
            label_142111da0:
                int32_t rax_6 = *(rax_4 + 0xc)
                void* const rax_10
                
                if (rax_6 s>= data_143e1d9b4)
                    rax_10 = nullptr
                else
                    uint32_t rdx_5 = zx.d(rax_6.w)
                    
                    if (rax_6 s< 0)
                        rax_6 += 0xffff
                        rdx_5 -= 0x10000
                    
                    rax_10 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(rdx_5) * 0x18
                
                *(rax_10 + 8) |= 0x40000000
            else
                if (data_143f48b2c == 1 || data_143de5452 == 0)
                    int16_t* const rbx_4 = &data_142d40450
                    
                    if (var_40 != 0)
                        rbx_4 = var_48
                    
                    rax_4 = sub_140d2f6f0(sub_1425312f0(), 0, rbx_4, 0, 0x1000, 0, 1, 0)
                    *(rsi_1 + &data_143f48af0) = rax_4
                
                if (rax_4 != 0)
                    goto label_142111da0
            
            int16_t* rcx_12 = var_48
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        
        rsi_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t rax_12 = data_143f48b2c - 1
    bool cond:0_1 = data_143de5452 == 0
    data_143f48b2c = rax_12
    
    if (cond:0_1 || rax_12 == 0)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    data_143f48b28 = rax_12.b

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_38)
