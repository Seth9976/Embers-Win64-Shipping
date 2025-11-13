// 函数: sub_1417fcae0
// 地址: 0x1417fcae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143ef9cb8 = arg1
void*** rax = j_sub_140a82f30(0x10)

if (rax == 0)
    rax = nullptr
else
    rax[1].d = 0
    *rax = &data_142fe1358

*(arg1 + 0x18) = rax
void*** rax_1 = j_sub_140a82f30(0x28)

if (rax_1 == 0)
    rax_1 = nullptr
else
    __builtin_memset(&rax_1[1], 0, 0x20)
    *rax_1 = &data_142fe1380

*(arg1 + 0x10) = rax_1
int64_t* var_38
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_38)
int64_t* rcx_1 = *(arg1 + 0x10)
(*(*rcx_1 + 0x48))(rcx_1, "BuildRootCertificateArray")
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_38)
void* rcx_3 = data_143ddb400
int64_t* var_48 = nullptr
int32_t i_4 = 0
int32_t result = sub_140af2c50(rcx_3, &data_142fe1150, PinnedPublicKeys", &var_48, &data_143de5780)
int64_t* rsi = var_48

if (result != 0)
    void* r14_3 = &rsi[sx.q(i_4) * 2]
    
    if (rsi != r14_3)
        do
            var_38 = nullptr
            int32_t i_5 = 0
            result = sub_140a2ccb0(rsi, &var_38, U":\t", 1)
            int32_t i_3 = i_5
            
            if (i_3 == 2)
                int64_t* rcx_5 = *(arg1 + 0x10)
                int64_t* rdx_2 = var_38
                result = (*(*rcx_5 + 0x30))(rcx_5, rdx_2, &rdx_2[2])
                i_3 = i_5
            
            int64_t* rbx_1 = var_38
            
            if (i_3 != 0)
                int32_t i
                
                do
                    int64_t rcx_6 = *rbx_1
                    
                    if (rcx_6 != 0)
                        result = sub_140a74f90(rcx_6)
                    
                    rbx_1 = &rbx_1[2]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                rbx_1 = var_38
            
            if (rbx_1 != 0)
                result = sub_140a74f90(rbx_1)
            
            rsi = &rsi[2]
        while (rsi != r14_3)
        
        rsi = var_48

int32_t i_2 = i_4

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_8 = *rsi
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        rsi = &rsi[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rsi = var_48

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
