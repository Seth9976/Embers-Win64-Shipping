// 函数: sub_142802180
// 地址: 0x142802180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _String_2
char* _EndPtr

if ((*(*arg3 + 0x10))(arg3, "NumActors", &_String_2) != 0)
    char* _String = _String_2
    _EndPtr = _String
    
    if (_String != 0 && *_String != 0)
        strtoul(_String, &_EndPtr, 0xa)

char rax_3 = (*(*arg3 + 0x10))(arg3, "MaxNbActors", &_String_2)
char* _String_1

if (rax_3 != 0)
    _String_1 = _String_2
    _EndPtr = _String_1

char* arg_28
uint32_t rdi

if (rax_3 == 0 || _String_1 == 0 || *_String_1 == 0)
    rdi = arg_28.d
else
    rdi = strtoul(_String_1, &_EndPtr, 0xa)

int64_t rsi
uint64_t r8_3

if ((*(*arg3 + 0x10))(arg3, "SelfCollision", &_String_2) == 0)
    r8_3 = zx.q(arg_28.b)
    rsi.b = 0
else
    char* _String_3 = _String_2
    
    if (_String_3 == 0 || *_String_3 == 0)
        r8_3 = zx.q(arg_28.b)
        rsi.b = 1
    else
        int32_t rax_7
        rax_7, r8_3 = physx::shdfnd::stricmp(_String_3, "true")
        rsi.b = 1
        r8_3.b = rax_7 == 0

int64_t* rcx_3 = *arg_28
int64_t* rax_10 = (*(*rcx_3 + 0x18))(rcx_3, zx.q(rdi), r8_3)
int64_t rdx_3 = *arg4
_String_2 = (*(rdx_3 + 0x18))(arg4, rdx_3)
char** var_d8 = &_String_2
char** var_c0 = &_String_2
void var_a8
physx::PxAggregateGeneratedInfo::PxAggregateGeneratedInfo(&var_a8)
arg_28.b = 0
rsi.b &= 1
(*(*arg3 + 0x58))(arg3)

if ((*(*arg3 + 0x18))(arg3, "Actors") != 0)
    (*(*arg3 + 0x58))(arg3)
    
    if ((*(*arg3 + 0x20))(arg3) != 0)
        char i
        
        do
            char* rax_23 = (*(*arg3 + 0x38))(arg3)
            
            if (physx::shdfnd::stricmp(rax_23, "PxActorRef") != 0)
                if (physx::shdfnd::stricmp(rax_23, "PxArticulationRef") == 0)
                    arg_28 = 0
                    char rax_30 = sub_1427ddc70(arg3, arg5, &arg_28)
                    char* rdi_3 = arg_28
                    rsi.b &= rax_30
                    
                    if (rdi_3 != 0)
                        int64_t* rax_32
                        int64_t r8_7
                        rax_32, r8_7 = (*(*rdi_3 + 0x28))(rdi_3)
                        
                        if (rax_32 != 0)
                            int64_t r9_1 = *rax_32
                            r8_7.b = 1
                            (*(r9_1 + 0x48))(rax_32, rdi_3, r8_7, r9_1, var_d8, 0, 0, var_c0, 0, 0)
                        
                        (*(*rax_10 + 0x38))(rax_10, rdi_3)
            else
                arg_28 = 0
                char rax_25 = sub_1427ddc70(arg3, arg5, &arg_28)
                char* rdi_2 = arg_28
                rsi.b &= rax_25
                
                if (rdi_2 != 0)
                    int64_t* rax_27
                    int64_t r8_5
                    rax_27, r8_5 = (*(*rdi_2 + 0x30))(rdi_2)
                    
                    if (rax_27 != 0)
                        int64_t r9 = *rax_27
                        r8_5.b = 1
                        (*(r9 + 0x68))(rax_27, rdi_2, r8_5, r9, var_d8, 0, 0, var_c0, 0, 0)
                    
                    (*(*rax_10 + 0x28))(rax_10, rdi_2)
            
            i = (*(*arg3 + 0x28))(arg3)
        while (i != 0)
    
    (*(*arg3 + 0x60))(arg3)
    (*(*arg3 + 0x48))(arg3)

(*(*arg3 + 0x60))(arg3)
int64_t* var_c8
char const* const rax_38

if (rsi.b == 0)
    rax_38 = &data_1434cce10
    int64_t var_d0_1 = 0
    var_c8 = nullptr
else
    rax_38 = "PxAggregate"
    int64_t* var_d0 = rax_10
    var_c8 = rax_10

*arg2 = rax_38.o
arg2[1].q = var_c8
return arg2
