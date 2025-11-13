// 函数: sub_142370a60
// 地址: 0x142370a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int16_t* const rsi = &data_142d40450
int64_t var_48
int64_t var_38
int64_t var_30
void var_20

if (data_143f59388 == 0)
    int64_t* rax_1 = sub_142475900()
    void* rdx_1 = rax_1[0x23]
    
    if (rdx_1 == 0)
        int64_t rdx_2 = *rax_1
        (*(rdx_2 + 0x390))(rax_1, rdx_2)
        rdx_1 = rax_1[0x23]
    
    var_38 = *(rdx_1 + 0x38)
    sub_140596d10(&var_30, rdx_1 + 0x40)
    
    if (var_38 != 0)
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_20)
        int64_t* rax_3 = sub_140d30800(&var_38, &var_48)
        int16_t* rbx_2
        
        if (rax_3[1].d == 0)
            rbx_2 = &data_142d40450
        else
            rbx_2 = *rax_3
        
        void* rax_5 = sub_140d2f6f0(sub_14259e970(), 0, rbx_2, 0, 0, 0, 1, 0)
        int64_t rcx_5 = var_48
        data_143f59388 = rax_5
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_20)
    
    int64_t rcx_7 = var_30
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

*(arg1 + 0x28) = data_143f59388

if (data_143f59390 == 0)
    int64_t* rax_7 = sub_142475900()
    void* rdx_6 = rax_7[0x23]
    
    if (rdx_6 == 0)
        int64_t rdx_7 = *rax_7
        (*(rdx_7 + 0x390))(rax_7, rdx_7)
        rdx_6 = rax_7[0x23]
    
    var_38 = *(rdx_6 + 0x68)
    int32_t* result = sub_140596d10(&var_30, rdx_6 + 0x70)
    
    if (var_38 != 0)
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_20)
        int16_t** rax_9 = sub_140d30800(&var_38, &var_48)
        
        if (rax_9[1].d != 0)
            rsi = *rax_9
        
        void* rax_11 = sub_140d2f6f0(sub_14259e130(), 0, rsi, 0, 0, 0, 1, 0)
        int64_t rcx_13 = var_48
        data_143f59390 = rax_11
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        result = pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
            &var_20)
    
    int64_t rcx_15 = var_30
    
    if (rcx_15 != 0)
        result = sub_140a74f90(rcx_15)
    
    if (data_143f59390 == 0)
        return result

void arg_8
return sub_141e6db90(arg1 + 0x88, &arg_8, &data_143f59390, nullptr)
