// 函数: sub_1427cba00
// 地址: 0x1427cba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
class physx::PxCollection* rax = PxCreateCollection()
int64_t r9 = *arg1
int32_t rdi = 0
int64_t result

if ((*(r9 + 0x38))(arg1, arg4, arg5, r9) == 0)
label_1427cbacf:
    class physx::PxCollection* rax_10 = PxCreateCollection()
    int64_t rdx_6 = *arg1
    int32_t rdi_1 = 0
    class physx::PxCollection* var_40_1 = rax_10
    void** const var_48 = &data_1434cd098
    
    if ((*(rdx_6 + 0x38))(arg1, rdx_6) == 0)
    label_1427cbca7:
        (*(*rax_10 + 0x70))(rax_10)
        int32_t rax_36 = (*(*rax + 0x38))(rax)
        int32_t rsi_3 = 0
        int32_t r14_2 = rax_36
        char const* const var_68
        int64_t var_60
        
        if (rax_36 != 0)
            do
                int64_t r8_9 = *rax
                int64_t* rax_37 = (*(r8_9 + 0x40))(rax, zx.q(rsi_3), r8_9)
                class physx::shdfnd::Foundation* rax_38 = physx::shdfnd::Foundation::getInstance()
                int64_t rdx_18 = *rax_37
                var_60 = (*(rdx_18 + 8))(rax_37, rdx_18)
                var_68 = "PxSerialization::isSerializable: An object of type %s is subordinate but "
                "not required by other objects in the collection (orphan). Please remove the object "
                "from"
                physx::shdfnd::Foundation::error(rax_38, 4, 
                    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                "hysXExtensions\src\serialization\SnSerialization.cpp", 
                    0xd5, 
                    "PxSerialization::isSerializable: An object of type %s is subordinate but not "
                "required by other objects in the collection (orphan). Please remove the object "
                "from")
                rsi_3 += 1
            while (rsi_3 u< r14_2)
        
        (*(*rax + 0x70))(rax)
        
        if (r14_2 != 0)
            result.b = 0
        else if (arg3 == 0)
            result.b = 1
        else
            class physx::PxCollection* rax_41 = PxCreateCollection()
            class physx::PxCollection* var_30_1 = rax_41
            void** const var_38 = &data_1434cd098
            
            if ((*(*arg3 + 0x38))(arg3) == 0)
            label_1427cbe78:
                (*(*rax_41 + 0x70))(rax_41)
                result.b = 1
            else
                while (true)
                    int64_t* rax_45 = (*(*arg3 + 0x40))(arg3, zx.q(r14_2))
                    int64_t r8_10 = *arg2
                    int64_t* rax_46 = (*(r8_10 + 0x18))(arg2, zx.q(rax_45[1].w), r8_10)
                    int64_t r9_5 = *rax_46
                    (*(r9_5 + 8))(rax_46, rax_45, &var_38, r9_5, var_68, var_60)
                    int64_t rdx_22 = *rax_41
                    int32_t rdi_3 = 0
                    
                    if ((*(rdx_22 + 0x38))(rax_41, rdx_22) != 0)
                        while (true)
                            int64_t* rax_49 = (*(*rax_41 + 0x40))(rax_41, zx.q(rdi_3))
                            int64_t r8_12 = *arg1
                            bool cond:0_1 = (*(r8_12 + 0x20))(arg1, rax_49, r8_12) != 0
                            int64_t rax_51 = *rax_41
                            
                            if (cond:0_1)
                                (*(rax_51 + 0x70))(rax_41)
                                class physx::shdfnd::Foundation* rax_70 =
                                    physx::shdfnd::Foundation::getInstance()
                                int64_t rdx_31 = *rax_49
                                int64_t rax_71 = (*(rdx_31 + 8))(rax_49, rdx_31)
                                int64_t rdx_32 = *rax_45
                                int64_t var_58_3 = rax_71
                                int64_t var_60_5 = (*(rdx_32 + 8))(rax_45, rdx_32)
                                physx::shdfnd::Foundation::error(rax_70, 4, 
                                    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4"
                                "ource\PhysXExtensions\src\serialization\SnSerialization.cpp", 
                                    0xf7, 
                                    "PxSerialization::isSerializable: Object of type %s in "
                                "externalReferences references an object of type %s in collection "
                                "(circular dependency).")
                                break
                            
                            rdi_3 += 1
                            
                            if (rdi_3 u>= (*(rax_51 + 0x38))(rax_41))
                                goto label_1427cbde3
                        
                        break
                    
                label_1427cbde3:
                    uint64_t rax_53 = zx.q(*(rax_41 + 0x64))
                    
                    if (rax_53.d != 0 && *(rax_41 + 0x74) != 0)
                        memset(*(rax_41 + 0x58), 0xffffffff, zx.q((rax_53 << 2).d))
                        int32_t r9_6 = *(rax_41 + 0x60)
                        int32_t i = 0
                        
                        if (r9_6 != 1)
                            int64_t rdx_25 = 0
                            int64_t r8_14 = 0
                            
                            do
                                i += 1
                                r8_14 += 4
                                *(*(rax_41 + 0x50) + rdx_25) = i
                                rdx_25 += 4
                            while (i u< r9_6 - 1)
                        
                        *(*(rax_41 + 0x50) + (zx.q(*(rax_41 + 0x60) - 1) << 2)) = 0xffffffff
                        *(rax_41 + 0x6c) = 0
                        *(rax_41 + 0x74) = 0
                    
                    r14_2 += 1
                    
                    if (r14_2 u>= (*(*arg3 + 0x38))(arg3))
                        goto label_1427cbe78
                
                result.b = 0
    else
        while (true)
            int64_t* rax_13 = (*(*arg1 + 0x40))(arg1, zx.q(rdi_1))
            int64_t r8_3 = *r14
            int64_t* rax_14 = (*(r8_3 + 0x18))(r14, zx.q(rax_13[1].w), r8_3)
            int64_t r9_2 = *rax_14
            (*(r9_2 + 8))(rax_14, rax_13, &var_48, r9_2)
            int64_t rdx_10 = *rax_10
            int32_t rbx_2 = 0
            
            if ((*(rdx_10 + 0x38))(rax_10, rdx_10) != 0)
                while (true)
                    int64_t* rax_17 = (*(*rax_10 + 0x40))(rax_10, zx.q(rbx_2))
                    int64_t r8_5 = *rax
                    
                    if ((*(r8_5 + 0x20))(rax, rax_17, r8_5) == 0)
                        if ((*(*arg1 + 0x20))(arg1, rax_17) == 0)
                            char* rax_64
                            class physx::shdfnd::Foundation* rdi_4
                            int32_t r9_8
                            
                            if (arg3 == 0)
                                class physx::shdfnd::Foundation* rax_65 =
                                    physx::shdfnd::Foundation::getInstance()
                                int64_t rdx_29 = *rax_17
                                rdi_4 = rax_65
                                int64_t rax_66 = (*(rdx_29 + 8))(rax_17, rdx_29)
                                int64_t rdx_30 = *rax_13
                                int64_t var_58_2 = rax_66
                                r9_8 = 0xc1
                                int64_t var_60_4 = (*(rdx_30 + 8))(rax_13, rdx_30)
                                rax_64 = "PxSerialization::isSerializable: Object of type %s "
                                "references a missing serial object of type %s. Please completed the "
                                "collection or specify an externalReferences collection containing "
                                "the object."
                            label_1427cbf63:
                                physx::shdfnd::Foundation::error(rdi_4, 4, 
                                    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4"
                                "ource\PhysXExtensions\src\serialization\SnSerialization.cpp", 
                                    r9_8, rax_64)
                            label_1427cbf70:
                                (*(*rax + 0x70))(rax)
                                (*(*rax_10 + 0x70))(rax_10)
                                result.b = 0
                                break
                            
                            if ((*(*arg3 + 0x20))(arg3, rax_17) == 0)
                                class physx::shdfnd::Foundation* rax_61 =
                                    physx::shdfnd::Foundation::getInstance()
                                int64_t rdx_27 = *rax_17
                                rdi_4 = rax_61
                                int64_t rax_62 = (*(rdx_27 + 8))(rax_17, rdx_27)
                                int64_t rdx_28 = *rax_13
                                int64_t var_58_1 = rax_62
                                r9_8 = 0xb1
                                int64_t var_60_3 = (*(rdx_28 + 8))(rax_13, rdx_28)
                                rax_64 = "PxSerialization::isSerializable: Object of type %s "
                                "references a missing object of type %s. The missing object needs to "
                                "be added to either the current collection or the external"
                                goto label_1427cbf63
                            
                            if ((*(*arg3 + 0x68))(arg3, rax_17) == 0)
                                class physx::shdfnd::Foundation* rax_59 =
                                    physx::shdfnd::Foundation::getInstance()
                                int64_t rdx_26 = *rax_17
                                int64_t var_60_2 = (*(rdx_26 + 8))(rax_17, rdx_26)
                                physx::shdfnd::Foundation::error(rax_59, 4, 
                                    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4"
                                "ource\PhysXExtensions\src\serialization\SnSerialization.cpp", 
                                    0xb8, 
                                    "PxSerialization::isSerializable: Object of type %s in "
                                "externalReferences collection requires an id.")
                                goto label_1427cbf70
                    else
                        int64_t r8_6 = *rax
                        (*(r8_6 + 0x18))(rax, rax_17, r8_6)
                    
                    rbx_2 += 1
                    
                    if (rbx_2 u>= (*(*rax_10 + 0x38))(rax_10))
                        r14 = arg2
                        goto label_1427cbc13
                
                break
            
        label_1427cbc13:
            uint64_t rax_29 = zx.q(*(rax_10 + 0x64))
            
            if (rax_29.d != 0 && *(rax_10 + 0x74) != 0)
                memset(*(rax_10 + 0x58), 0xffffffff, zx.q((rax_29 << 2).d))
                int32_t r9_3 = *(rax_10 + 0x60)
                int32_t i_1 = 0
                
                if (r9_3 != 1)
                    int64_t rdx_16 = 0
                    int64_t r8_8 = 0
                    
                    do
                        i_1 += 1
                        r8_8 += 4
                        *(*(rax_10 + 0x50) + rdx_16) = i_1
                        rdx_16 += 4
                    while (i_1 u< r9_3 - 1)
                
                *(*(rax_10 + 0x50) + (zx.q(*(rax_10 + 0x60) - 1) << 2)) = 0xffffffff
                *(rax_10 + 0x6c) = 0
                *(rax_10 + 0x74) = 0
            
            rdi_1 += 1
            
            if (rdi_1 u>= (*(*arg1 + 0x38))(arg1))
                goto label_1427cbca7
else
    while (true)
        int64_t r8 = *arg1
        void* rax_2 = (*(r8 + 0x40))(arg1, zx.q(rdi), r8)
        int64_t r8_1 = *r14
        int64_t* rax_3 = (*(r8_1 + 0x18))(r14, zx.q(*(rax_2 + 8)), r8_1)
        int64_t rdx_2 = *rax_3
        
        if ((*(rdx_2 + 0x10))(rax_3, rdx_2) != 0)
            int64_t r9_1 = *rax
            (*(r9_1 + 8))(rax, rax_2, 0, r9_1)
        
        if (arg3 != 0)
            int64_t rax_6 = (*(*arg1 + 0x68))(arg1, rax_2)
            
            if (rax_6 != 0)
                int64_t r8_2 = *arg3
                int64_t rax_7 = (*(r8_2 + 0x50))(arg3, rax_6, r8_2)
                
                if (rax_7 != 0 && rax_7 != rax_2)
                    (*(*rax + 0x70))(rax)
                    int64_t var_60_1 = rax_6
                    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
                        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                    "hysXExtensions\src\serialization\SnSerialization.cpp", 
                        0x89, 
                        "PxSerialization::isSerializable: Reference id %I64u used both in current "
                    "collection and in externalReferences. Please use unique identifiers.")
                    result.b = 0
                    break
        
        rdi += 1
        
        if (rdi u>= (*(*arg1 + 0x38))(arg1))
            goto label_1427cbacf

return result
