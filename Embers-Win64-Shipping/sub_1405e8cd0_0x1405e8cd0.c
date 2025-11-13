// 函数: sub_1405e8cd0
// 地址: 0x1405e8cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = 0
int32_t var_58 = 0
sub_1405947f0(&var_60, 9)
int32_t rax = var_58 + 9
var_58 = rax

if (rax s> 0)
    sub_140594770(&var_60)

UnDecorator::getReferenceType(var_60, u"WmfMedia", 0x12)
sub_140b7c510()
int64_t r9 = data_143e19eb0
void var_20
int64_t* rcx_3 = *(*(r9 + 0x38))(&data_143e19eb0, &var_20, &var_60, r9, -2)
int64_t var_40
int64_t var_30
sub_1405ea070(&var_40, (*(*rcx_3 + 0x18))(rcx_3, &var_30))
int64_t rcx_5 = var_30

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t temp1_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_18 + 8))(var_18, 1)

int64_t rcx_8 = var_60

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t var_50 = 0
int32_t var_48 = 0
sub_1405947f0(&var_50, 0x11)
int32_t rax_6 = var_48 + 0x11
var_48 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_50)

UnDecorator::getReferenceType(var_50, u"/Plugin/WmfMedia", 0x22)
int64_t rcx_12 = var_50

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

HMODULE result = LoadLibraryW(u"shlwapi.dll")

if (result != 0)
    result = LoadLibraryW(u"mf.dll")
    
    if (result != 0)
        result = LoadLibraryW(u"mfplat.dll")
        
        if (result != 0)
            result = LoadLibraryW(u"mfplay.dll")
            
            if (result != 0)
                result = MFStartup(0x20070, 0)
                
                if (result.d s>= 0)
                    void** arg_10
                    int64_t rbx_1 = *sub_140b58170(&arg_10, "Media", 1)
                    j_sub_140b3db50()
                    int64_t* rax_8 = sub_140b407e0(&data_143de7d78, rbx_1)
                    
                    if (rax_8 != 0)
                        int64_t r8_2 = *rax_8
                        (*(r8_2 + 0x48))(rax_8, arg1 - 8, r8_2)
                    
                    void** rax_9 = j_sub_140a82f30(0x18)
                    void*** rcx_15 = rax_9
                    arg_10 = rax_9
                    
                    if (rax_9 == 0)
                        rcx_15 = nullptr
                    else
                        *rcx_15 = &data_142d5c028
                        rcx_15[1] = 0
                        rcx_15[2] = 0
                    
                    result = arg1 + 8
                    
                    if (result != &arg_10)
                        void*** unused = result->unused.q
                        result->unused.q = rcx_15
                        
                        if (unused != 0)
                            result = (**unused)(unused, 1, unused)
                    else if (rcx_15 != 0)
                        result = (**rcx_15)(rcx_15, 1, &arg_10)
                    
                    *(arg1 + 0x10) = 1

int64_t rcx_16 = var_40

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
