// 函数: sub_140fc76e0
// 地址: 0x140fc76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143de5480 == 0
int64_t rbx = data_143e2b858
uint32_t SizePointer = 0
int64_t r8

if (cond:0)
    r8 = 0
else
    r8.b = GetCurrentThreadId() != data_143de5470

uint32_t Family = sbb.d(rbx.d, rbx.d, *(rbx + (r8 << 2)) != 0) & 2

if (GetAdaptersAddresses(Family, 
        GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST | GAA_FLAG_SKIP_DNS_SERVER |
            GAA_FLAG_INCLUDE_PREFIX | GAA_FLAG_SKIP_FRIENDLY_NAME, 
        nullptr, nullptr, &SizePointer) != 0x6f)
    uint32_t rax_3
    rax_3.b = 0
    return rax_3

struct IP_ADAPTER_ADDRESSES_LH* AdapterAddresses = sub_140a82f30(zx.q(SizePointer), 0)

if (GetAdaptersAddresses(Family, 
        GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST | GAA_FLAG_SKIP_DNS_SERVER |
            GAA_FLAG_INCLUDE_PREFIX | GAA_FLAG_SKIP_FRIENDLY_NAME, 
        nullptr, AdapterAddresses, &SizePointer) != 0)
    sub_140a74f90(AdapterAddresses)
    int64_t rax_5
    rax_5.b = 0
    return rax_5

struct IP_ADAPTER_ADDRESSES_LH* Next = AdapterAddresses

if (AdapterAddresses != 0)
    do
        uint32_t IfType = Next->IfType
        
        if ((IfType == 6 || IfType == 0x47) && Next->OperStatus == IfOperStatusUp)
            for (void* FirstUnicastAddress = Next->FirstUnicastAddress; FirstUnicastAddress != 0; 
                    FirstUnicastAddress = *(FirstUnicastAddress + 8))
                if ((*(FirstUnicastAddress + 4) & 1) != 0)
                    int16_t* rbx_2 = *(FirstUnicastAddress + 0x10)
                    void*** rax_6 = j_sub_140a82f30(0x90)
                    void*** rdi_1
                    
                    if (rax_6 == 0)
                        rdi_1 = nullptr
                    else
                        rdi_1 = sub_140fc4690(rax_6, arg1, 0)
                    
                    void*** rax_8 = j_sub_140a82f30(0x18)
                    
                    if (rax_8 != 0)
                        rax_8[1].d = 1
                        *(rax_8 + 0xc) = 1
                        *rax_8 = &data_142d42ea8
                        rax_8[2] = rdi_1
                    
                    int16_t rax_9 = *rbx_2
                    
                    if (rax_9 == 2)
                        (*rdi_1)[0x16](rdi_1, &rbx_2[2], rdi_1)
                        rax_9 = *rbx_2
                    
                    if (rax_9 == 0x17)
                        (*rdi_1)[0x15](rdi_1, &rbx_2[4])
                        rdi_1[4].d = *(rbx_2 + 0x18)
                        rax_9 = *rbx_2
                    
                    uint32_t netlong
                    
                    if (rax_9 != 2)
                        netlong = Next->Ipv6IfIndex
                    else
                        netlong = Next->Anonymous1.Alignment.__offset(0x4).d
                    
                    (*rdi_1)[0x20](rdi_1, zx.q(ntohl(netlong)))
                    
                    if (rax_8 != 0)
                        rax_8[1].d += 1
                    
                    int64_t rdi_3 = sx.q(arg2[1].d)
                    int32_t rax_15 = (rdi_3 + 1).d
                    arg2[1].d = rax_15
                    
                    if (rax_15 s> *(arg2 + 0xc))
                        sub_1405a4f90(arg2)
                    
                    void**** rax_18 = (rdi_3 << 4) + *arg2
                    *rax_18 = rdi_1
                    rax_18[1] = rax_8
                    
                    if (rax_8 != 0)
                        rax_8[1].d -= 1
                        
                        if (rax_8[1].d == 1)
                            (**rax_8)(rax_8)
                            int32_t temp2_1 = *(rax_8 + 0xc)
                            *(rax_8 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*rax_8)[1](rax_8, 1)
        
        Next = Next->Next
    while (Next != 0)

sub_140a74f90(AdapterAddresses)
int64_t rax_21
rax_21.b = 1
return rax_21
