// 函数: sub_140b70ca0
// 地址: 0x140b70ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143e18664

if (rax != 0)
    return rax

char rax_1 = sub_140af87b0()
char rax_2

if (rax_1 != 0)
    sub_140af2b60()
    rax_2 = sub_140b21a10(&data_143dbb3f0, u"usehyperthreading")

if (rax_1 == 0 || rax_2 == 0)
    uint32_t ReturnedLength = 0
    GetLogicalProcessorInformation(nullptr, &ReturnedLength)
    SYSTEM_LOGICAL_PROCESSOR_INFORMATION* Buffer = sub_140a82f30(zx.q(ReturnedLength), 0)
    GetLogicalProcessorInformation(Buffer, &ReturnedLength)
    uint64_t i_1 = zx.q(ReturnedLength) u>> 5
    
    if (i_1 != 0)
        int32_t rdx_3 = data_143e18664
        enum _LOGICAL_PROCESSOR_RELATIONSHIP* rcx_3 = &Buffer->Relationship
        uint64_t i
        
        do
            if ((rcx_3 - 8)->Relationship == RelationProcessorCore)
                rdx_3 += 1
            
            rcx_3 = &rcx_3[8]
            i = i_1
            i_1 -= 1
        while (i != 1)
        data_143e18664 = rdx_3
    
    sub_140a74f90(Buffer)
else
    data_143e18664 = sub_140b70da0()

int32_t arg_10 = 0x8000
sub_140af2b60()

if (sub_140b2ab20(&data_143dbb3f0, u"-corelimit=", &arg_10) == 0)
    return data_143e18664

int32_t rax_5 = arg_10

if (data_143e18664 s<= rax_5)
    rax_5 = data_143e18664

data_143e18664 = rax_5
return rax_5
