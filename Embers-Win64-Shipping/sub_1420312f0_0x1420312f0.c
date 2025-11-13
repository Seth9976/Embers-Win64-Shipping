// 函数: sub_1420312f0
// 地址: 0x1420312f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
void* const rbx

if (rax_1 == 0)
    rbx = nullptr
else
    rbx = *(rax_1 + 0x128)

int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0xb)
int32_t rax_2 = var_50 + 0xb
var_50 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_58)

int64_t r14 = var_58
UnDecorator::getReferenceType(r14, u"MaxPlayers", 0x16)
int32_t r15 = *(arg1 + 0x224)
int16_t* _String_4
void var_38
sub_142035500(&_String_4, sub_140596d10(&var_38, arg2), &var_58)
int16_t* const _String_1 = &data_142d40450
int32_t result_1

if (result_1 s<= 1)
    int16_t* _String_5 = _String_4
    
    if (_String_5 != 0)
        sub_140a74f90(_String_5)
else
    int16_t* _String_2 = _String_4
    int16_t* const _String = &data_142d40450
    
    if (result_1 != 0)
        _String = _String_2
    
    r15 = _wtoi(_String)
    
    if (_String_2 != 0)
        sub_140a74f90(_String_2)

*(arg1 + 0x224) = r15

if (r14 != 0)
    sub_140a74f90(r14)

var_58 = 0
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 0xe)
int32_t rax_6 = var_50_1 + 0xe
var_50_1 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_58)

int64_t r14_1 = var_58
UnDecorator::getReferenceType(r14_1, u"MaxSpectators", 0x1c)
int32_t r15_1 = arg1[0x44].d
sub_142035500(&_String_4, sub_140596d10(&var_38, arg2), &var_58)
uint64_t result = zx.q(result_1)

if (result.d s<= 1)
    int16_t* _String_6 = _String_4
    
    if (_String_6 != 0)
        result = sub_140a74f90(_String_6)
else
    int16_t* _String_3 = _String_4
    
    if (result.d != 0)
        _String_1 = _String_3
    
    result = _wtoi(_String_1)
    r15_1 = result.d
    
    if (_String_3 != 0)
        result = sub_140a74f90(_String_3)

arg1[0x44].d = r15_1

if (r14_1 != 0)
    result = sub_140a74f90(r14_1)

if (rbx != 0 && *(rbx + 0x248) != 0)
    result = sub_142574490()
    
    if (result != 0)
        int64_t* rbx_1 = *(rbx + 0x248)
        int64_t rdx_6 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= rbx_1[7].d)
            uint64_t result_2 = result
            result = rbx_1[6]
            
            if (*(result + (result_2 << 3)) == rdx_6 && rbx_1 != 0)
                result = rbx_1[0x23]
                
                if (result != 0)
                    result = *(result + 0x278)
                    arg1[0x46] = result
                else
                    (*(*rbx_1 + 0x390))(rbx_1)
                    result = rbx_1[0x23]
                    
                    if (result != 0)
                        result = *(result + 0x278)
                        arg1[0x46] = result

return result
