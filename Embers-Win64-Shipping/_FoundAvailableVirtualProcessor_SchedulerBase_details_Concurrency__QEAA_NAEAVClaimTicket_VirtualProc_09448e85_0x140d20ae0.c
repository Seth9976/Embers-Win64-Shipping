// 函数: ?FoundAvailableVirtualProcessor@SchedulerBase@details@Concurrency@@QEAA_NAEAVClaimTicket@VirtualProcessor@23@Vlocation@3@K@Z
// 地址: 0x140d20ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r12 = &data_142d40450
void* result = nullptr
int16_t* var_60
int32_t var_58
int16_t* var_50
int32_t var_48
int16_t* var_40
int32_t var_38

if (((arg4 u>> 4).b & 1) != 0)
    int64_t rax_2 = *arg1
    
    if (arg5 == 0)
        result = (*(rax_2 + 0x378))()
    else
        int64_t* rax_3 = (*(rax_2 + 0x308))()
        int64_t rdx = *rax_3
        result = (*(rdx + 0x378))(rax_3, rdx)
else if (arg2 == 0)
label_140d2100f:
    
    if (arg5 == 0)
        result = arg1[0x23]
        
        if (result == 0)
            (*(*arg1 + 0x390))(arg1)
            result = arg1[0x23]
    else
        int64_t* rax_35 = (*(*arg1 + 0x308))(arg1)
        result = rax_35[0x23]
        
        if (result == 0)
            int64_t rdx_18 = *rax_35
            (*(rdx_18 + 0x390))(rax_35, rdx_18)
            result = rax_35[0x23]
else
    if (*(arg2 + 0x10) == sub_140cddea0())
        goto label_140d2100f
    
    sub_140d3e210()
    void* rax_7 = sub_140d209c0(arg2)
    void* rdi_2 = rax_7
    void* result_1 = sub_140d3b5d0(rax_7, arg1, arg3)
    
    if (result_1 != 0)
        result = result_1
    else
        char rax_8
        
        if ((not.b((arg4 u>> 0x16).b) & 1) == 0)
            rax_8 = sub_140cab2f0(arg2)
        
        if ((not.b((arg4 u>> 0x16).b) & 1) != 0 || rax_8 == 0)
            if (data_143de5452 != 0 && ((*(rdi_2 + 8) u>> 0xa).b & 1) != 0)
                if (*(arg2 + 0x10) == 0)
                    var_60 = nullptr
                    var_58 = 0
                    sub_1405947f0(&var_60, 5)
                    int32_t rax_30 = var_58 + 5
                    var_58 = rax_30
                    
                    if (rax_30 s> 0)
                        sub_140594770(&var_60)
                    
                    UnDecorator::getReferenceType(var_60, u"None", 0xa)
                else
                    sub_140d21830(arg2, &var_60, 0, 0)
                
                int16_t* rsi_1 = &data_142d40450
                
                if (var_58 != 0)
                    rsi_1 = var_60
                
                if (arg1 == 0 || arg1[2] == 0)
                    var_50 = nullptr
                    var_48 = 0
                    sub_1405947f0(&var_50, 5)
                    int32_t rax_31 = var_48 + 5
                    var_48 = rax_31
                    
                    if (rax_31 s> 0)
                        sub_140594770(&var_50)
                    
                    UnDecorator::getReferenceType(var_50, u"None", 0xa)
                else
                    sub_140d21830(arg1, &var_50, 0, 0)
                
                int16_t* rdi_4 = &data_142d40450
                
                if (var_48 != 0)
                    rdi_4 = var_50
                
                if (*(rax_7 + 0x10) == 0)
                    var_40 = nullptr
                    var_38 = 0
                    sub_1405947f0(&var_40, 5)
                    int32_t rax_32 = var_38 + 5
                    var_38 = rax_32
                    
                    if (rax_32 s> 0)
                        sub_140594770(&var_40)
                    
                    UnDecorator::getReferenceType(var_40, u"None", 0xa)
                else
                    sub_140d21830(rax_7, &var_40, 0, 0)
                
                int16_t* r9_1 = &data_142d40450
                int16_t* var_70_2 = rsi_1
                
                if (var_38 != 0)
                    r9_1 = var_40
                
                int16_t* var_78_2 = rdi_4
                sub_140af98a0("Unknown", 0x75, 
                    %s had RF_NeedLoad when searching for an archetype of %s in %s", r9_1)
                int16_t* rcx_35 = var_40
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                int16_t* rcx_36 = var_50
                
                if (rcx_36 != 0)
                    sub_140a74f90(rcx_36)
                
                int16_t* rcx_37 = var_60
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
                
                sub_140afbb40()
                rdi_2 = rax_7
            
            int64_t* rcx_38 = *(rdi_2 + 0x10)
            result = (*(*rcx_38 + 0x370))(rcx_38, arg1, arg3)
        else
            int64_t* r14_2 = *(arg2 + 0x40)
            
            if (arg5 == 0)
                goto label_140d20bd8
            
            if (r14_2 != 0)
                r14_2 = (*(*r14_2 + 0x308))(r14_2)
            label_140d20bd8:
                
                if (r14_2 != 0)
                    while (((*(r14_2 + 0xcc) u>> 0x12).b & 1) != 0)
                        if (data_143de5452 != 0 && ((r14_2[1].d u>> 0xa).b & 1) != 0)
                            if (*(arg2 + 0x10) == 0)
                                var_40 = nullptr
                                var_38 = 0
                                sub_1405947f0(&var_40, 5)
                                int32_t rax_15 = var_38 + 5
                                var_38 = rax_15
                                
                                if (rax_15 s> 0)
                                    sub_140594770(&var_40)
                                
                                UnDecorator::getReferenceType(var_40, u"None", 0xa)
                            else
                                sub_140d21830(arg2, &var_40, 0, 0)
                            
                            int16_t* rsi = &data_142d40450
                            
                            if (var_38 != 0)
                                rsi = var_40
                            
                            if (arg1 == 0 || arg1[2] == 0)
                                var_50 = nullptr
                                var_48 = 0
                                sub_1405947f0(&var_50, 5)
                                int32_t rax_16 = var_48 + 5
                                var_48 = rax_16
                                
                                if (rax_16 s> 0)
                                    sub_140594770(&var_50)
                                
                                UnDecorator::getReferenceType(var_50, u"None", 0xa)
                            else
                                sub_140d21830(arg1, &var_50, 0, 0)
                            
                            int16_t* rdi_3 = &data_142d40450
                            
                            if (var_48 != 0)
                                rdi_3 = var_50
                            
                            if (rax_7 == 0 || *(rax_7 + 0x10) == 0)
                                var_60 = nullptr
                                var_58 = 0
                                sub_1405947f0(&var_60, 5)
                                int32_t rax_18 = var_58 + 5
                                var_58 = rax_18
                                
                                if (rax_18 s> 0)
                                    sub_140594770(&var_60)
                                
                                UnDecorator::getReferenceType(var_60, u"None", 0xa)
                            else
                                sub_140d21830(rax_7, &var_60, 0, 0)
                            
                            int16_t* r9 = &data_142d40450
                            int16_t* var_70_1 = rsi
                            
                            if (var_58 != 0)
                                r9 = var_60
                            
                            int16_t* var_78_1 = rdi_3
                            sub_140af98a0("Unknown", 0x64, 
                                %s had RF_NeedLoad when searching supers for an archetype of %s in %s", 
                                r9)
                            int16_t* rcx_17 = var_60
                            
                            if (rcx_17 != 0)
                                sub_140a74f90(rcx_17)
                            
                            int16_t* rcx_18 = var_50
                            
                            if (rcx_18 != 0)
                                sub_140a74f90(rcx_18)
                            
                            int16_t* rcx_19 = var_40
                            
                            if (rcx_19 != 0)
                                sub_140a74f90(rcx_19)
                            
                            sub_140afbb40()
                        
                        void* result_2 = sub_140d3b5d0(r14_2, arg1, arg3)
                        result = result_2
                        
                        if (result_2 != 0)
                            int32_t rax_19 = *(result_2 + 0xc)
                            void* const rax_23
                            
                            if (rax_19 s>= data_143e1d9b4)
                                rax_23 = nullptr
                            else
                                uint32_t rdx_9 = zx.d(rax_19.w)
                                
                                if (rax_19 s< 0)
                                    rax_19 += 0xffff
                                    rdx_9 -= 0x10000
                                
                                rax_23 = *(data_143e1d9a0 + (sx.q(rax_19 s>> 0x10) << 3))
                                    + sx.q(rdx_9) * 0x18
                            
                            if (((*(rax_23 + 8) u>> 0x1d).b & 1) == 0
                                    && ((*(result + 8) u>> 6).b & 1) == 0)
                                break
                        
                        r14_2 = r14_2[8]
                        
                        if (r14_2 == 0)
                            break
    
    sub_140d40c40()
    
    if (result == 0)
        goto label_140d2100f

if (data_143de5452 != 0 && result != 0 && ((*(result + 8) u>> 0xa).b & 1) != 0)
    if (arg2 == 0 || *(arg2 + 0x10) == 0)
        var_60 = nullptr
        var_58 = 0
        sub_1405947f0(&var_60, 5)
        int32_t rax_39 = var_58 + 5
        var_58 = rax_39
        
        if (rax_39 s> 0)
            sub_140594770(&var_60)
        
        UnDecorator::getReferenceType(var_60, u"None", 0xa)
    else
        sub_140d21830(arg2, &var_60, 0, 0)
    
    int16_t* const rdi_5 = &data_142d40450
    
    if (var_58 != 0)
        rdi_5 = var_60
    
    if (arg1 == 0 || arg1[2] == 0)
        var_50 = nullptr
        var_48 = 0
        sub_1405947f0(&var_50, 5)
        int32_t rax_40 = var_48 + 5
        var_48 = rax_40
        
        if (rax_40 s> 0)
            sub_140594770(&var_50)
        
        UnDecorator::getReferenceType(var_50, u"None", 0xa)
    else
        sub_140d21830(arg1, &var_50, 0, 0)
    
    int16_t* const rbx_2 = &data_142d40450
    
    if (var_48 != 0)
        rbx_2 = var_50
    
    if (*(result + 0x10) == 0)
        var_40 = nullptr
        var_38 = 0
        sub_1405947f0(&var_40, 5)
        int32_t rax_41 = var_38 + 5
        var_38 = rax_41
        
        if (rax_41 s> 0)
            sub_140594770(&var_40)
        
        UnDecorator::getReferenceType(var_40, u"None", 0xa)
    else
        sub_140d21830(result, &var_40, 0, 0)
    
    int16_t* const var_70_3 = rdi_5
    
    if (var_38 != 0)
        r12 = var_40
    
    int16_t* const var_78_3 = rbx_2
    sub_140af98a0("Unknown", 0x8b, 
        %s had RF_NeedLoad when being set up as an archetype of %s in %s", r12)
    int16_t* rcx_54 = var_40
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    int16_t* rcx_55 = var_50
    
    if (rcx_55 != 0)
        sub_140a74f90(rcx_55)
    
    int16_t* rcx_56 = var_60
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    sub_140afbb40()

return result
