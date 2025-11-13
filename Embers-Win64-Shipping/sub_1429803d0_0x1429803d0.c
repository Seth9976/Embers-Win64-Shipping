// 函数: sub_1429803d0
// 地址: 0x1429803d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* result = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class Imf_2_3::ChannelList> `RTTI Type Descriptor', 0)

if (result == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

if (arg1 + 8 != result + 8)
    sub_1429785b0(arg1 + 8)
    void* rbx_1 = *(arg1 + 8)
    char var_88
    *(rbx_1 + 8) = sub_142977910(arg1 + 8, *(*(result + 8) + 8), rbx_1, var_88)
    int64_t* r8_2 = *(arg1 + 8)
    *(arg1 + 0x10) = *(result + 0x10)
    int64_t* rdx_2 = r8_2[1]
    
    if (*(rdx_2 + 0x19) != 0)
        *r8_2 = r8_2
        result = *(arg1 + 8)
        *(result + 0x10) = result
    else
        int64_t* rcx_3 = *rdx_2
        
        if (*(rcx_3 + 0x19) == 0)
            int64_t* rax_5
            
            do
                rax_5 = *rcx_3
                rdx_2 = rcx_3
                rcx_3 = rax_5
            while (*(rax_5 + 0x19) == 0)
        
        *r8_2 = rdx_2
        void* rdx_3 = *(arg1 + 8)
        void* result_1 = *(rdx_3 + 8)
        result = *(result_1 + 0x10)
        
        while (*(result + 0x19) == 0)
            result_1 = result
            result = *(result + 0x10)
        
        *(rdx_3 + 0x10) = result_1

__security_check_cookie(rax_1 ^ &var_b8)
return result
